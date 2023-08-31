#include "main.h"
#include <stdio.h>

/**
 *binary_to_uint - Converts a binary number unsigned integer.
 *@b: A pointer to a string of 0 and 1 character.
 *
 *Return: The converted unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int value = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}

	return (value);
}
