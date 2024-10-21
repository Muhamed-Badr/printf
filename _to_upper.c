#include "main.h"

/**
 * _to_upper - Converts all lowercase letters in the given buffer `buf`
 *             to their corresponding uppercase letters.
 * @buf: A pointer to the buffer(string) that needs to be converted.
 * @buf_size: The size of the buffer `buf`, or the length of the string.
 *
 * Return: On success, A pointer to the buffer `buf`.
 *         On failure, NULL('\0').
 */
char *_to_upper(char *buf, int buf_size)
{
	int i;

	/* Check for invalid buffer or buffer size */
	if (buf == NULL || buf_size < 0)
		return (NULL);

	/* Loop through each character in the buffer */
	for (i = 0; i < buf_size; i++)
	{
		/* Convert lowercase letters ('a' to 'z') to uppercase */
		if (buf[i] >= 'a' && buf[i] <= 'z')
			buf[i] -= 32; /* The difference between 'a' and 'A' is 32 */
	}

	/* Return the modified buffer */
	return (buf);
}

