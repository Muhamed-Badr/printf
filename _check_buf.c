#include "main.h"

/**
 * _check_buf - Check buffer.
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int _check_buf(char *buf, int *buf_index)
{
	int total_bytes_written = 0;

	if ((*buf_index + 1) + 1 > BUF_SIZE)
	{
		total_bytes_written = write(1, buf, (*buf_index + 1));
		*buf_index = -1;
	}

	return (total_bytes_written);
}

