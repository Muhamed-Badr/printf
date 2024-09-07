#include "main.h"

/**
 * handle_c - Handle the type conversion `c` (character values).
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_c(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, ch;
	char padding_ch = ' ';

	ch = va_arg(ap, int);

	/*
	 * Padding by ' ' before character,
	 *  if The `flag_minus` turn off (default/normal case)
	 */
	if (!fs->flags.flag_minus)
		while ((fs->width - 1) > 0)
		{
			total_bytes_written += _check_buf(buf, buf_index);
			buf[*buf_index + 1] = padding_ch;
			(*buf_index)++;
			fs->width--;
		}

	/* Store the character in buffer(`buf`) */
	total_bytes_written += _check_buf(buf, buf_index);
	buf[*buf_index + 1] = ch;
	(*buf_index)++;
	fs->width--;

	/*
	 * Padding by ' ' after character,
	 *  if The `flag_minus` turn on
	 */
	while (fs->width > 0)
	{
		total_bytes_written += _check_buf(buf, buf_index);
		buf[*buf_index + 1] = padding_ch;
		(*buf_index)++;
		fs->width--;
	}

	return (total_bytes_written);
}
