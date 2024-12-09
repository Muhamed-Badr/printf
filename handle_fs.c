#include "main.h"

/**
 * handle_fs - Handle format specifier.
 * @format: A pointer to the format that the optional/variadic parameters
 *           passed should follow when printing.
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @total_bytes_written:A pointer to the total number of bytes written so far.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `fs_len` which `fs_len >= 1`.
 */
int handle_fs(const char *format, char *buf, int *buf_index,
		int *total_bytes_written, va_list ap)
{
	/* Declare and Initialize the `fs_t` struct */
	fs_t fs = {{0, 0, 0, 0, 0}, {6, 0}, 0, '\0', '\0'};
	int fs_len, (*func)(char *, int *, fs_t *, va_list);

	fs_len = get_fs_values(format, &fs, ap);

	func = get_type_func(fs.type_conversion);

	/*
	 * If `get_type_func()` returns NULL('\0'), this indicates
	 *  that the detected '%' and the string of length `fs_len` after it
	 *  isn't a correct format specifier. So, handle it as
	 *  invalid/unrecognized format specifier.
	 * Else handle it as a format specifier.
	 */
	if (func == NULL)
	{
		/*
		 * IF `fs.type_conversion == '\0'`. So, handle format specifier
		 *  as invalid (this indicates an error. So, return `-1`).
		 * Else handle format specifier as unrecognized.
		 */
		if (fs.type_conversion == '\0')
			*total_bytes_written = -1;
		else
			*total_bytes_written += handle_unrecognized_fs(buf, buf_index,
					&fs);
	}
	else
		*total_bytes_written += func(buf, buf_index, &fs, ap);

	return (fs_len);
}

