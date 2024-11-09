#include "main.h"

/**
 * handle_b - Handle the type conversion `b` (integer numbers to binary).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_b(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	length_functions_t functions;
	long num;
	int num_len = 0, i;
	char tmp_buf[64];

	(void)fs;
	if (fs->length == 'l')
		num = va_arg(ap, long);
	else if (fs->length == 'h')
		num = (short)va_arg(ap, int);
	else
		num = va_arg(ap, int);
	functions = get_length_func(fs->length);
	if (num < 0)
		num_len = 32;
	else
		num_len = (functions.num_digits) ? functions.num_digits(&num, 2, 1) : 0;

	/* Convert the number to string and add it to the temporary buffer */
	if (functions.num_to_str)
		if (functions.num_to_str(tmp_buf, sizeof(tmp_buf), &num, num_len, 2, 1))
		{
			/*
			 * Convert the number to the corresponding negative one
			 *  using 2's complement
			 */
			if (num < 0)
			{
				/* Start from the end of the binary string to find the first '1' */
				for (i = (num_len - 1); i >= 0 && tmp_buf[i] != '1'; i--)
					;

				/*
				 * Flip the bits of the binary string for 2's complement,
				 *  starting from the next digit after the detected first '1'
				 */
				for (i--; i >= 0; i--)
					tmp_buf[i] = (tmp_buf[i] == '1') ? '0' : '1';
			}
		}

	/*
	 * Use `handle_str()` to copy the converted string from temporary
	 *  buffer `tmp_buf` to the actual buffer `buf`
	 */
	return (handle_str(tmp_buf, num_len, buf, buf_index));
}
