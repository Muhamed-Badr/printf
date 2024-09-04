#include "main.h"

/**
 * _printf - The C `printf`-Like Function.
 * @format: A pointer to the format that the optional/variadic parameters
 *           passed should follow when printing.
 *
 * Description: It acts exactly like the standard C `printf` function.
 *               It's similar in behavior and purpose to the standard
 *               C `printf` function.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int _printf(const char *format, ...)
{
	char *buf;
	int buf_i = -1, format_i = 0, str_len, total_bytes_written = 0;
	va_list ap;
	/*+D-*/int debug_flag_1 = 1, debug_flag_2 = 1, debug_num = 0, n = 0;

	/*+D-*/printf("[+%d] in _printf()\n", debug_num++);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	buf = malloc(BUF_SIZE * sizeof(*buf));
	if (buf == NULL)
		return (-1);

	while (format[format_i] != '\0')
	{
		/*+D*/
		debug_flag_2 = 1;
		if (debug_flag_1)
		{
			printf("\t[+%d] in 1st while\n", debug_num++);
			debug_flag_1 = 0;
		}
		if (format[format_i] == '\n')
			printf("\t\tformat[%d]: %s\n", format_i, "(newline)");
		else if (format[format_i] != '\0')
			printf("\t\tformat[%d]: %c\n", format_i, format[format_i]);
		else
			printf("\t\tformat[%d]: %s\n", format_i, "(nil)");
		/*-D*/

		/*
		 * Through in `format` string until end/detect `%`
		 *  to get the length of normal string (string doesn't need to be
		 *  handeled), to write/store it.
		 */
		str_len = 0;
		while (format[format_i + str_len] != '\0' &&
				format[format_i + str_len] != '%')
		{
			str_len++;
			/*+D*/
			if (debug_flag_2)
			{
				printf("\t\t[+%d] in 1st while\n", debug_num++);
				debug_flag_2 = 0;
			}
			/*-D*/
		}

		/*+D*/
		if (debug_flag_2 == 0)
			printf("\t\t[-%d] out 1st while\n", --debug_num);
		printf("\t\tstr_len: %d\n", str_len);
		/*-D*/

		total_bytes_written += handle_str((format + format_i), str_len, buf,
				&buf_i, &debug_num);
		/*+D*/
		printf("\t\t[-%d] out handle_str()\n", --debug_num);
		printf("\t\tformat_i: %d\n", format_i);
		printf("\t\ttotal_bytes_written: %d\n", total_bytes_written);
		if (format[format_i + str_len] != '\0')
			printf("\t\tformat[%d]: %c\n", format_i + str_len,
					format[format_i + str_len]);
		else
			printf("\t\tformat[%d]: %s\n", format_i + str_len, "(nil)");
		/*-D*/

		format_i += str_len;

		if (format[format_i] == '%')
		{
			format_i += handle_fs((format + format_i), buf, &buf_i,
					&total_bytes_written, ap, &debug_num);
			/*+D*/
			printf("\t\t[-%d] out handle_fs()\n", --debug_num);
			printf("\t\tformat_i: %d\n", format_i);
			printf("\t\ttotal_bytes_written: %d\n", total_bytes_written);
			if (format[format_i] == '\n')
				printf("\t\tformat[%d]: %s\n", format_i, "(newline)");
			else if (format[format_i] != '\0')
				printf("\t\tformat[%d]: %c\n", format_i, format[format_i]);
			else
				printf("\t\tformat[%d]: %s\n", format_i, "(nil)");
			/*-D*/


		}

		/*+D-*/printf("\n\n\t===END of LOOP %d====================\n", ++n);
	}
	/*+D*/
	if (debug_flag_1 == 0)
		printf("\t[-%d] out 1st while\n", --debug_num);
	printf("[-%d] out _printf()\n", --debug_num);
	puts("===END of My _printf()============================================");
	/*-D*/

	if (buf_i > -1)
		total_bytes_written += write(1, buf, (buf_i + 1));
	fflush(stdout);

	return (total_bytes_written);
}

