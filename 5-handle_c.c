#include "main.h"

/**
 * handle_c - Handle the type conversion `c` (character values).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_c(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, ch;
	char padding_ch = ' ', pad_start = 0, pad_end = 0;

	ch = va_arg(ap, int);
	if ((fs->width - 1) > 0)
	{
		if (fs->flags.flag_minus)
			pad_end = 1;
		else
			pad_start = 1;
	}

	/*
	 * Padding by `padding_ch` before character,
	 *  if The `flag_minus` turn off (default/normal case).
	 */
	if (pad_start)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - 1));

	/* Store the character in buffer(`buf`). */
	total_bytes_written += _check_buf(buf, buf_index);
	buf[*buf_index + 1] = ch;
	(*buf_index)++;

	/*
	 * Padding by `padding_ch` after character,
	 *  if The `flag_minus` turn on.
	 */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - 1));

	return (total_bytes_written);
}
