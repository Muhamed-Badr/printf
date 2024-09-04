#include "main.h"
int (*get_type_func(char ch, int *debug_num))(char *, int *, fs_t *, va_list,
		int *);

/**
 * handle_fs - Handle format specifier.
 * @format: A pointer to the format that the optional/variadic parameters
 *           passed should follow when printing.
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @total_bytes_written:A pointer to the total number of bytes written so far.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `fs_len` which `fs_len >= 1`.
 */
int handle_fs(const char *format, char *buf, int *buf_index,
		int *total_bytes_written, va_list ap, int *debug_num)
{
	/* Declare and Initialize the `fs_t` struct */
	fs_t fs = {{0, 0, 0, 0, 0}, 0, 6, '\0', '\0'};
	int fs_len, (*func)(char *, int *, fs_t *, va_list, int *);

	/*+D-*/printf("\t\t[+%d] in handle_fs()\n", (*debug_num)++);

	fs_len = get_fs_values(format, &fs, debug_num);
	/*+D-*/printf("\t\t\t[-%d] out get_fs_values()\n", --(*debug_num));

	func = get_type_func(fs.type_conversion, debug_num);
	/*+D-*/printf("\t\t\t[-%d] out get_type_func()\n", --(*debug_num));

	if (func == NULL)
	{
		*total_bytes_written += handle_str(format, fs_len, buf, buf_index,
				debug_num);
		/*+D-*/printf("\t\t\t[-%d] out handle_str()\n", --(*debug_num));
	}
	else
	{
		*total_bytes_written += func(buf, buf_index, &fs, ap, debug_num);
		/*+D-*/printf("\t\t\t[-%d] out handle_%c()\n", --(*debug_num), fs.type_conversion);
	}

	/*+D-*/printf("\t\t\tfs_len: %d\n", fs_len);

	return (fs_len);
}

/**
 * get_type_func - selects the correct function to perform
 *                the asked operation.
 * @ch: A variable to `char`, holds the symbol of the asked operation.
 *
 * Return: A Pointer to a function that takes arguments
 *          (const char *, int *, fs_t *, va_list), returns `int`.
 */
int (*get_type_func(char ch, int *debug_num))(char *, int *, fs_t *, va_list,
		int *)
{
	type_t types[] = {
		{"d", handle_i},
		{"i", handle_i},
		{"o", handle_o},
		{"x", handle_x},
		{"X", handle_X},
		{"u", handle_u},
		{"c", handle_c},
		{"s", handle_s},
		{"S", handle_S},
		{"b", handle_b},
		{"r", handle_r},
		{"R", handle_R},
		{"p", handle_p},
		{"n", handle_n},
		{"%", handle_mod_symbol},
		{NULL, NULL}
	};
	int i;

	/*+D-*/printf("\t\t\t[+%d] in get_type_func()\n", (*debug_num)++);

	i = 0;
	while (types[i].type != NULL)
	{
		/* if (types[i].type[0] == ch) */
		if (*types[i].type == ch)
			return (types[i].f);
		i++;
	}

	return (types[i].f); /*`return (NULL);` the last element in array `types`*/
}

