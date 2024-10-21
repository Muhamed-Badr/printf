#include "main.h"

/**
 * handle_mod_symbol - Handle the type conversion `%` (to ptint '%' symbol).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_mod_symbol(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0;

	/* Avoid `-Werror=unused-parameter` compiler error*/
	(void)fs;
	(void)ap;

	/* Store the character '%' in buffer(`buf`). */
	total_bytes_written += _check_buf(buf, buf_index);
	buf[*buf_index + 1] = '%';
	(*buf_index)++;

	return (total_bytes_written);
}
