#include "main.h"

/**
 * _printf - The C `printf()`-Like Function.
 * @format: A pointer to the format that the optional/variadic parameters
 *           passed should follow when printing.
 *
 * Description: It acts exactly like the standard C `printf` function.
 *               It's similar in behavior and purpose to the standard
 *               C `printf` function.
 *
 * Return: On success, `total_bytes_written` which `total_bytes_written >= 0`.
 *         On failure, `-1`.
 */
int _printf(const char *format, ...)
{
	char *buf;
	int buf_index = -1, format_index = 0, str_len, total_bytes_written = 0;
	va_list ap;

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	buf = malloc(BUF_SIZE * sizeof(*buf));
	if (buf == NULL)
		return (-1);

	while (format[format_index] != '\0')
	{
		/*
		 * Through in `format` string until the end OR detect `%`
		 *  to get the length of normal string (string doesn't need to be
		 *  handeled), to write/store it.
		 */
		str_len = 0;
		while (format[format_index + str_len] != '\0' &&
				format[format_index + str_len] != '%')
			str_len++;
		total_bytes_written += handle_str((format + format_index), str_len,
				buf, &buf_index);

		format_index += str_len;

		if (format[format_index] == '%')
			format_index += handle_fs((format + format_index), buf, &buf_index,
					&total_bytes_written, ap);
	}
	if (buf_index > -1)
		total_bytes_written += write(1, buf, (buf_index + 1));

	va_end(ap);
	free(buf);

	return (total_bytes_written);
}

