#include "main.h"
/**
 * apply_padding - Adds padding characters to a buffer.
 * @buf: A pointer to the buffer where the padding characters will be stored.
 * @buf_index: A pointer to the current index of the buffer.
 * @padding_ch: The character to be used for padding.
 * @padding_len: The number of padding characters to be added.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int apply_padding(char *buf, int *buf_index, char padding_ch, int padding_len)
{
	int total_bytes_written = 0;

	while ((padding_len--)  > 0)
	{
		total_bytes_written += _check_buf(buf, buf_index);
		buf[*buf_index + 1] = padding_ch;
		(*buf_index)++;
	}

	return (total_bytes_written);
}
