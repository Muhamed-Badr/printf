#include "main.h"

/**
 * handle_i - Handle the type conversion `i` or `d` (integer values/numbers).
 * @buf: A pointer the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_i(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, num, num_len;
	char padding_ch, sign_required = 0, tmp_buf[64];
	char pad_start = 0, pad_mid = 0, pad_end = 0;

	/*
	 * Collect some information:
	 *     1. The number `num`.
	 *     2. The number length `num_len`.
	 *     3. A flag `sign_required`: check if we need to reserve a place for
	 *         the number's sign OR not (its value will be only `1` or `0`).
	 *     4. The padding character `padding_ch`.
	 *     5. The padding position:
	 *            -> Padding before the number and its sign `pad_start`.
	 *            -> Padding between the number and its sign `pad_mid`.
	 *            -> Padding after the number and its sign `pad_end`.
	 */
	num = va_arg(ap, int);
	num_len = _num_digits(num, 10);
	sign_required = (num < 0 || fs->flags.flag_plus || fs->flags.flag_space);
	padding_ch = ((fs->flags.flag_zero && !fs->flags.flag_minus) ? '0' : ' ');
	if ((fs->width - (num_len + sign_required)) > 0)
	{
		if (fs->flags.flag_minus)
			pad_end = 1;
		else if (padding_ch == '0')
			pad_mid = 1;
		else
			pad_start = 1;
	}

	/*
	 * Padding by `padding_ch` before number(including its sign),
	 *  if The `flag_minus` turn off (default/normal case).
	 */
	if (pad_start)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + sign_required)));

	/* Handle sign or space for the number */
	if (sign_required)
	{
		total_bytes_written += _check_buf(buf, buf_index);
		if (num < 0)
			buf[*buf_index + 1] = '-';
		else if (fs->flags.flag_plus)
			buf[*buf_index + 1] = '+';
		else
			buf[*buf_index + 1] = ' ';
		(*buf_index)++;
	}

	/*
	 * Padding by `padding_ch` between the number and its sign,
	 *  if The `flag_minus` turn off.
	 */
	if (pad_mid)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + sign_required)));

	/* Convert the integer to string and add it to the buffer */
	if (_num_to_str(tmp_buf, sizeof(tmp_buf), num, num_len, 10))
		/*
		 * Use `handle_str()` to copy the converted string from temporary
		 *  buffer `tmp_buf` to the actual buffer `buf`
		 */
		total_bytes_written += handle_str(tmp_buf, num_len, buf, buf_index);

	/*
	 * Padding by `padding_ch` after number(including its sign),
	 *  if The `flag_minus` turn on
	 */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + sign_required)));

	return (total_bytes_written);
}

