#include "main.h"

/**
 * get_length_func - Select the correct function pointers for number handling
 *                    based on length modifier.
 * @ch: The character representing the length modifier
 *       (e.g., 'h' for short, 'l' for long).
 *
 * Return: The corresponding `length_functions_t` structure,
 *          which contains two function pointers:
 *         - num_digits: A function to calculate the digit count of the number.
 *         - num_to_str: A function to convert the number to a string.
 */
length_functions_t get_length_func(char ch)
{
	length_modifier_t modifiers[] = {
		{"\0", {_num_digits, _num_to_str}},
		{"h", {_hnum_digits, _hnum_to_str}},
		{"l", {_lnum_digits, _lnum_to_str}},
		{NULL, {NULL, NULL}}
	};
	int i;

	i = 0;
	while (modifiers[i].modifier != NULL)
	{
		/* if (modifiers[i].modifier[0] == ch) */
		if (*modifiers[i].modifier == ch)
			return (modifiers[i].functions);
		i++;
	}

	/*`return (NULL);` the last element in array `modifiers`*/
	return (modifiers[i].functions);
}

