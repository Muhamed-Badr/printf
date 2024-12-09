#include "main.h"

/**
 * handle_unrecognized_fs - Handle unrecognized format specifier.
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_unrecognized_fs(char *buf, int *buf_index, fs_t *fs)
{
	int total_bytes_written = 0, tmp_buf_index = -1;
	char tmp_buf[5];

	/* Store `%` symbol */
	tmp_buf[++tmp_buf_index] = '%';

	/* Handle/Store flags symbols */
	if (fs->flags.flag_hash)
		tmp_buf[++tmp_buf_index] = '#';

	if (fs->flags.flag_plus || fs->flags.flag_space)
		tmp_buf[++tmp_buf_index] = (fs->flags.flag_plus) ? '+' : ' ';

	if (fs->flags.flag_minus || fs->flags.flag_zero)
		tmp_buf[++tmp_buf_index] = (fs->flags.flag_minus) ? '-' : '0';

	/* Store type conversion character */
	tmp_buf[++tmp_buf_index] = fs->type_conversion;

	/*
	 * Use `handle_str()` to copy the content from temporary
	 *  buffer `tmp_buf` to the actual buffer `buf` if it's not empty.
	 */
	if (tmp_buf_index > -1)
		total_bytes_written += handle_str(tmp_buf, tmp_buf_index + 1,
				buf, buf_index);

	return (total_bytes_written);
}

