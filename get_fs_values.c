#include "main.h"
int check_flags(const char *str, flags_t flags);
int str_to_int(const char *str);

/**
 * get_fs_values - Get values of format specifier.
 * @format: A pointer to The format that the optional/variadic parameters
 *           passed should follow when printing. it contains the format
 *           specifier values.
 * @fs: A pointer to format specifier struct.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: Format specifier length (A number >= 1).
 */
int get_fs_values(const char *format, fs_t *fs, va_list ap)
{
	int format_index;
	char *result;

	/*
	 * -> Turn flag on if its corresponding symbol is exist.
	 * -> why `format_index` start from '1'? to skip '%'.
	 */
	for (format_index = 1;; format_index++)
	{
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
	}

	/* Set width value if exist. */
	if (format[format_index] == '*')
	{
		fs->width = va_arg(ap, int);
		format_index++;
	}
	else
	{
		for (; _isdigit(format[format_index]); format_index++)
			fs->width = (fs->width * 10) + (format[format_index] - '0');
	}

	/* Set precision value if '.' symbol is exist. */
	if (format[format_index] == '.')
	{
		format_index++;
		fs->precision.is_set = 1;
		fs->precision.value = 0;
		if (format[format_index] == '*')
		{
			fs->precision.value = va_arg(ap, int);
			format_index++;
		}
		else
		{
			for (; _isdigit(format[format_index]); format_index++)
				fs->precision.value = (fs->precision.value * 10) +
					(format[format_index] - '0');
		}
	}

	/* Set length modifier value if exist. */
	result = _strchr("lh", format[format_index]);
	if (result != NULL && *result != '\0')
		fs->length = format[format_index++];

	/* Set type conversion if exist. */
	/*
	   result = _strchr("dioxXucsSbrRpnfeEgG%", format[format_index]);
	   if (result != NULL && *result != '\0')
	 */
	if (format[format_index] != '\0') /* avoid running out format limits */
		fs->type_conversion = format[format_index++];

	return (format_index);
}

