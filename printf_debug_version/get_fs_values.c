#include "main.h"
/*
 * int check_flags(const char *str, flags_t flags);
 * int str_to_int(const char *str);
 * char check_length_modifier(char ch);
 */

/**
 * get_fs_values - Get values of format specifier.
 * @format: A pointer to The format that the optional/variadic parameters
 *           passed should follow when printing. it contains the format
 *           specifier values.
 * @fs: A struct to format specifier.
 *
 * Return: Format specifier length (A number >= 1).
 */
int get_fs_values(const char *format, fs_t *fs, int *debug_num)
{
	char *type_conversions = "dioxXucsSfeEgGpn%";
	int format_i, i;

	/*+D-*/printf("\t\t\t[+%d] in get_fs_values()\n", (*debug_num)++);

	/* Turn flag on if its corresponding symbol is exist */
	for (format_i = 1;; format_i++)
		if (format[format_i] == ' ')
			fs->flags.flag_space = 1;
		else if (format[format_i] == '+')
			fs->flags.flag_plus = 1;
		else if (format[format_i] == '-')
			fs->flags.flag_minus = 1;
		else if (format[format_i] == '0')
			fs->flags.flag_zero = 1;
		else if (format[format_i] == '#')
			fs->flags.flag_hash = 1;
		else
			break;
	/* Set width value if exist */
	for (; format[format_i] >= '0' && format[format_i] <= '9'; format_i++)
		fs->width += (fs->width * 10) + (format[format_i] - '0');
	/* Set precision value if '.' symbol is exist */
	if (format[format_i] == '.')
		for (format_i += 1; format[format_i] >= '0' && format[format_i] <= '9';
				format_i++)
			fs->precision += (fs->precision * 10) + (format[format_i] - '0');
	/* Set length modifier value if exist */
	if (format[format_i] == 'l' || format[format_i] == 'h')
	{
		fs->length = format[format_i];
		format_i++;
	}
	/* Set type conversion if exist. */
	for (i = 0; type_conversions[i] != '\0'; i++)
		if (format[format_i] == type_conversions[i])
		{
			fs->type_conversion = format[format_i];
			format_i++;
			break;
		}

	/*+D-*/printf("\t\t\t\tfs_len: %d\n", format_i);

	return (format_i);
}
