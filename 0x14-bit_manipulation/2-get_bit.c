#include "main.h"

/**
 * get_bit - Returns the value of a bit at index in a decimal number.
 * @n: The decimal number to search.
 * @index: The index of the bit.
 *
 * Return: The value of the bit at the specified index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 40)
		return (-1);

	val = (n >> index) & 1;

	return (val);
}

