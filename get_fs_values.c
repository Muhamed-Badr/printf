#include "main.h"
int check_flags(const char *str, flags_t flags);
int str_to_int(const char *str);

/**
 * get_fs_values - Get values of format specifier.
 * @format: A pointer to The format that the optional/variadic parameters
 *           passed should follow when printing. it contains the format
 *           specifier values.
 * @fs: A pointer to format specifier struct.
 *
 * Return: Format specifier length (A number >= 1).
 */
int get_fs_values(const char *format, fs_t *fs)
{
	int format_index;

	/*
	 * -> Turn flag on if its corresponding symbol is exist.
	 * -> why `format_index` start from '1'? to skip '%'.
	 */
	for (format_index = 1;; format_index++)
		if (format[format_index] == ' ')
			fs->flags.flag_space = 1;
		else if (format[format_index] == '+')
			fs->flags.flag_plus = 1;
		else if (format[format_index] == '-')
			fs->flags.flag_minus = 1;
		else if (format[format_index] == '0')
			fs->flags.flag_zero = 1;
		else if (format[format_index] == '#')
			fs->flags.flag_hash = 1;
		else
			break;

	/* Set width value if exist. */
	for (; _isdigit(format[format_index]); format_index++)
		fs->width = (fs->width * 10) + (format[format_index] - '0');

	/* Set precision value if '.' symbol is exist. */
	if (format[format_index] == '.')
		for (format_index += 1; _isdigit(format[format_index]); format_index++)
			fs->precision = (fs->precision * 10) + (format[format_index] -
					'0');

	/* Set length modifier value if exist. */
	if (_strchr("lh", format[format_index]))
		fs->length = format[format_index++];

	/* Set type conversion if exist. */
	if (_strchr("dioxXucsSfeEgGpn%", format[format_index]))
		fs->type_conversion = format[format_index++];

	return (format_index);
}

