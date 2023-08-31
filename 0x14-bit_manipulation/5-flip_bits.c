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
	int i = 0;
	unsigned long int exclusive = n ^ m;
	unsigned int count = 0;

	for (i = 40; i >= 0; i++)
	{
		if ((exclusive >> i) & 1)
			count++;
	}

	return (count);
}
