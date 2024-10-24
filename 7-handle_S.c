#include "main.h"

#define NON_PRINTABLE(ch) ((ch > 0 && ch < 32) || (ch >= 127))
#define PRINTABLE(ch) (!NON_PRINTABLE(ch))

int _S_strlen(char *s);
int S_handle_str(const char *str, int str_len, char *buf, int *buf_index);

/**
 * handle_S - Handle the type conversion `S` (special case from `handle_s`).
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 * @fs: A pointer to `fs_t` struct, it stores the format specifier values.
 * @ap: A `va_list` object that contains the variadic arguments.
 *
 * Description: It's a customized version from `handle_s`, which Non printable
 *               characters (0 < ASCII value < 32 or >= 127) are printed
 *               this way: `\x`, followed by the ASCII code value in
 *                          hexadecimal (upper case - always 2 characters).
 *
 *               -> EX:
 *                      _printf("%S\n", "Best\nSchool");
 *               -> output:
 *                          Best\x0ASchool
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int handle_S(char *buf, int *buf_index, fs_t *fs, va_list ap)
{
	int total_bytes_written = 0, str_len;
	char padding_ch = ' ', *str, pad_start = 0, pad_end = 0;

	str = va_arg(ap, char *);
	/*This condition is applied in Linux, in Win (`str = "(null)";` always).*/
	if (str == NULL)
		str = (fs->precision.is_set) ? ""  : "(null)";
	str_len = _S_strlen(str);
	/*
	 * Limit `str_len` to the precision value if it is set and smaller
	 *  than `str_len`. The precision value represents the maximum length
	 *  of the string to print.
	 */
	if (fs->precision.is_set && fs->precision.value < str_len)
		str_len = fs->precision.value;
	if ((fs->width - str_len) > 0) /* Check padding position */
	{
		if (fs->flags.flag_minus)
			pad_end = 1;
		else
			pad_start = 1;
	}
	/*
	 * Padding by `padding_ch` before string,
	 *  if The `flag_minus` turn off (default/normal case).
	 */
	if (pad_start)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - str_len));
	/* Handle string */
	total_bytes_written += S_handle_str(str, str_len, buf, buf_index);
	/* Padding by `padding_ch` after string, if The `flag_minus` turn on. */
	if (pad_end)
		total_bytes_written += apply_padding(buf, buf_index, padding_ch,
				(fs->width - str_len));

	return (total_bytes_written);
}

/**
 * _S_strlen - returns the length of a string (special case from `_strlen`).
 * @s: pointer to the passed string.
 *
 * Description: It's a customized version from `_strlen` made especially for
 *               the `handle_s` function.
 *
 * Return: length of the passed string.
 */
int _S_strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		if (NON_PRINTABLE(*s))
			length += 4;
		else
			length++;
		s++;
	}

	return (length);
}

/**
 * S_handle_str - Handle string (special case from `handle_str`).
 * @str: A pointer to the passed string that needs to be handled.
 * @str_len: Length of the final string after expanding non-printable
 *            characters.
 * @buf: A pointer to the buffer where the formatted output should be stored.
 * @buf_index: A pointer to the current index in the buffer.
 *
 * Description: It's a customized version from `handle_str` made especially
 *               for the `handle_s` function.
 *
 * Return: `total_bytes_written` which `total_bytes_written >= 0`.
 */
int S_handle_str(const char *str, int str_len, char *buf, int *buf_index)
{
	int total_bytes_written = 0, handled_str_len, norm_str_len, str_index;
	char tmp_buf[4], allowed_len;

	if (str != NULL && str_len != 0)
	{
		str_index = 0;
		handled_str_len = 0;
		while (handled_str_len < str_len)
		{
			norm_str_len = 0;
			while ((handled_str_len + norm_str_len) < str_len &&
					PRINTABLE(str[str_index + norm_str_len]))
				norm_str_len++;

			/* Handle normal string (string formed from printable characters) */
			total_bytes_written += handle_str((str + str_index), norm_str_len,
					buf, buf_index);
			handled_str_len += norm_str_len;
			str_index += norm_str_len;

			if (handled_str_len < str_len)
			{
				tmp_buf[0] = '\\';
				tmp_buf[1] = 'x';
				allowed_len = (str_len - handled_str_len);

				/* Convert the number to string and add it to the buffer */
				if (_unum_to_str((tmp_buf + 2), 2, str[str_index], 2, 16))
					if (_to_upper((tmp_buf + 2), 2))
					{
						/*
						 * Use `handle_str()` to copy the converted string from
						 *  temporary buffer `tmp_buf` to the actual
						 *  buffer `buf`.
						 */
						total_bytes_written += handle_str(tmp_buf,
								(allowed_len > 4) ? 4 : (allowed_len),
								buf, buf_index);
						handled_str_len += 4;
						str_index++;
					}
			}
		}
	}
	return (total_bytes_written);
}

