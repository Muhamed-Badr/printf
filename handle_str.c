#include "main.h"

/**
 * handle_str - Handle string.
 * @str: A pointer to the passed string that needs to be handled.
 * @str_len: The length of the passed string `str`.
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_str(const char *str, int str_len, char *buf, int *buf_index)
{
	int total_bytes_written = 0;

	if (str != NULL && str_len != 0)
	{
		/*
		 * Write the string to standard output stream (stdout) directly
		 *  without buffering it, if it bigger than `BUF_SIZE`(1024).
		 */
		if (str_len > BUF_SIZE)
		{
			/*
			 * Write the content of `buf` to standard output stream (stdout)
			 *  if it isn't empty.
			 */
			if (*buf_index > -1)
			{
				total_bytes_written += write(1, buf, (*buf_index + 1));
				*buf_index = -1; /* Reset `buf_index` to `buf`'s empty state */
			}
			total_bytes_written += write(1, str, str_len);
		}
		else
		{
			/*
			 * Check if there are enough spaces in `buf` to store the string
			 *  that is less than `BUF_SIZE`(1024).
			 */
			if ((*buf_index + 1) + str_len > BUF_SIZE)
			{
				total_bytes_written += write(1, buf, (*buf_index + 1));
				*buf_index = -1;
			}

			/* Copy/Store the string into the `buf`. */
			_strncpy((buf + (*buf_index + 1)), str, str_len);
			*buf_index += str_len;
		}
	}

	return (total_bytes_written);
}

