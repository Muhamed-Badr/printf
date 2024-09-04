#include "main.h"

/**
 * get_type_func - selects the correct function to perform.
 *                the asked operation depending on the type conversion.
 * @ch: A variable to `char`, holds the symbol of the asked operation.
 *
 * Return: A Pointer to a function that takes arguments
 *          (const char *, int *, fs_t *, va_list), returns `int`.
 */
int (*get_type_func(char ch))(char *, int *, fs_t *, va_list)
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

