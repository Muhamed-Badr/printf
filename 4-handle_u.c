#include "main.h"

/**
 * handle_u - Handle the type conversion `u` (unsigned integer values/numbers).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_u(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, num_len, num;
	char padding_ch, tmp_buf[64];
	char pad_start = 0, pad_end = 0;

	/*
	 * Collect some information:
	 *     1. The number `num`.
	 *     2. The number length `num_len`.
	 *     3. The padding character `padding_ch`.
	 *     4. The padding position:
	 *            -> Padding before the number `pad_start`.
	 *            -> Padding after the number `pad_end`.
	 */
	num = va_arg(ap, int);
	num_len = _unum_digits(num, 10);
	padding_ch = ((fs->flags.flag_zero && !fs->flags.flag_minus) ? '0' : ' ');
	if ((fs->width - num_len) > 0)
	{
		if (fs->flags.flag_minus)
			pad_end = 1;
		else
			pad_start = 1;
	}

	/*
	 * Padding by `padding_ch` before number,
	 *  if The `flag_minus` turn off (default/normal case).
	 */
	if (pad_start)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - num_len));

	/* Convert the unsigned integer to string and add it to the buffer */
	if (_unum_to_str(tmp_buf, sizeof(tmp_buf), num, num_len, 10))
		/*
		 * Use `handle_str()` to copy the converted string from temporary
		 *  buffer `tmp_buf` to the actual buffer `buf`
		 */
		total_bytes_written += handle_str(tmp_buf, num_len, buf, buf_index);

	/*
	 * Padding by `padding_ch` after number,
	 *  if The `flag_minus` turn on
	 */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - num_len));

	return (total_bytes_written);
}
