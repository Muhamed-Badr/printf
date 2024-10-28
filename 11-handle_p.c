#include "main.h"

/**
 * handle_p - Handle the type conversion `p` (memory address / pointer).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * NOTE:
 *      [+] In the C `printf`, the address (a hexadecimal number) is printed in
 *           lowercase, and the prefix "0x" is added by default even if the
 *           user doesn't add the `#` flag.
 *      [+] in my version `_printf` i add some customization,
 *           there are 2 cases:
 *            [1] if user doesn't enable/add the hash flag `#`:
 *                 - my `_printf` behaves exactly like the C `_printf`.
 *            [2] if user enable/add the hash flag `#`:
 *                 - my `_printf` prints the address in uppercase
 *                    (including prefix).
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_p(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	void *ptr;
	unsigned long num;
	int total_bytes_written = 0, num_len;
	char sign_required, *base_prefix, base_prefix_len, tmp_buf[64];
	char padding_ch, pad_start = 0, pad_mid = 0, pad_end = 0;

	/*
	 * Collect some information:
	 *     1. The number `num`.
	 *     2. The number length `num_len`.
	 *     3. A flag `sign_required`: check if we need to reserve a place for
	 *         the number's sign OR not (its value will be only `1` or `0`).
	 *     4. The padding character `padding_ch`.
	 *     5. The base prefix `base_prefix`.
	 *     6. The base prefix length `base_prefix_len`.
	 *     7. The padding position:
	 *            -> Padding before the number and its base prefix `pad_start`.
	 *            -> Padding between the number and its base prefix `pad_mid`.
	 *            -> Padding after the number and its base  prefix`pad_end`.
	 */
	ptr = va_arg(ap, void *);
	if (ptr == NULL)
	{
		num_len = 0;
		sign_required  = 0;
		padding_ch = ' ';
		base_prefix = "(nil)";
		base_prefix_len = _strlen(base_prefix);
	}
	else
	{
		num = (unsigned long)ptr;
		num_len = _lunum_digits(num, 16);
		sign_required = (fs->flags.flag_plus || fs->flags.flag_space);
		padding_ch = ((fs->flags.flag_zero &&
					!fs->flags.flag_minus &&
					!sign_required) ? '0' :' ');
		base_prefix = (fs->flags.flag_hash) ? "0X" : "0x";
		base_prefix_len = _strlen(base_prefix);
	}
	if ((fs->width - (num_len + sign_required + base_prefix_len)) > 0)
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
				(fs->width - (num_len + sign_required + base_prefix_len)));

	/* Handle sign or space for the number */
	if (sign_required)
	{
		total_bytes_written += _check_buf(buf, buf_index);
		buf[*buf_index + 1] = ((fs->flags.flag_plus) ? '+' : ' ');
		(*buf_index)++;
	}

	/* Handle `base_prefix` */
	total_bytes_written += handle_str(base_prefix, base_prefix_len, buf,
			buf_index);

	/*
	 * Padding by `padding_ch` between the number and its base prefix,
	 *  if The `flag_minus` turn off.
	 */
	if (pad_mid)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + sign_required + base_prefix_len)));

	/* Convert the number to string and add it to the buffer */
	if (ptr&& _lunum_to_str(tmp_buf, sizeof(tmp_buf), num, num_len, 16))
	{
		if (!fs->flags.flag_hash || _to_upper(tmp_buf, num_len))
			/*
			 * Use `handle_str()` to copy the converted string from temporary
			 *  buffer `tmp_buf` to the actual buffer `buf`
			 */
			total_bytes_written += handle_str(tmp_buf, num_len, buf, buf_index);
	}

	/*
	 * Padding by `padding_ch` after number(including its base prefix),
	 *  if The `flag_minus` turn on
	 */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - (num_len + sign_required + base_prefix_len)));

	return (total_bytes_written);
}

