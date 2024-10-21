#include "main.h"

/**
 * handle_o - Handle the type conversion `o` (integer numbers to octal).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_o(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, num, num_len;
	char padding_ch, base_prefix_len, tmp_buf[64];
	char pad_start = 0, pad_mid = 0, pad_end = 0;

	/*
	 * Collect some information:
	 *     1. The number `num`.
	 *     2. The number length `num_len`.
	 *     3. The length of the base prefix for the number `base_prefix_len`.
	 *     4. The padding character `padding_ch`.
	 *     5. The padding position:
	 *            -> Padding before the number and its base prefix `pad_start`.
	 *            -> Padding between the number and its base prefix `pad_mid`.
	 *            -> Padding after the number and its base  prefix`pad_end`.
	 */
	num = va_arg(ap, int);
	num_len = _unum_digits(num, 8);
	base_prefix_len = (fs->flags.flag_hash) ? 1 : 0;
	padding_ch = ((fs->flags.flag_zero && !fs->flags.flag_minus) ? '0' : ' ');
	if ((fs->width - (num_len + base_prefix_len)) > 0)
	{
		if (fs->flags.flag_minus)
			pad_end = 1;
		else if (padding_ch == '0')
			pad_mid = 1;
		else
			pad_start = 1;
	}

	/*
	 * Padding by `padding_ch` before number(including its base prefix),
	 *  if The `flag_minus` turn off (default/normal case).
	 */
	if (pad_start)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + base_prefix_len)));

	/* Handle base prefix (enabled by `flag_hash`) for the number */
	if (fs->flags.flag_hash)
	{
		total_bytes_written += _check_buf(buf, buf_index);
		buf[*buf_index + 1] = '0';
		(*buf_index)++;
	}

	/*
	 * Padding by `padding_ch` between the number and its base prefix,
	 *  if The `flag_minus` turn off.
	 */
	if (pad_mid)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + base_prefix_len)));

	/* Convert the number to string and add it to the buffer */
	if (_unum_to_str(tmp_buf, sizeof(tmp_buf), num, num_len, 8))
		/*
		 * Use `handle_str()` to copy the converted string from temporary
		 *  buffer `tmp_buf` to the actual buffer `buf`
		 */
		total_bytes_written += handle_str(tmp_buf, num_len, buf, buf_index);

	/*
	 * Padding by `padding_ch` after number(including its base prefix),
	 *  if The `flag_minus` turn on
	 */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + base_prefix_len)));

	return (total_bytes_written);
}

