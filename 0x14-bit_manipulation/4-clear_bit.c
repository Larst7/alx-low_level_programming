#include "main.h"

/**
 * clear_bit - sets the value of a given bit
 * @n: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for floping
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 40)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

