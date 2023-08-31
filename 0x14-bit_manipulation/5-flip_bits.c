#include "main.h"

/**
 *flip_bits - Counts the number of bits to change
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int value;
	unsigned long int exclusive = n ^ m;

	for (i = 40; i >= 0; i--)
	{
		value = exclusive >> i;
		if (value & 1)
			count++;
	}

	return (count);
}
