#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number to set to 1
 * @index: index
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitShift;

	if (index > 63)
		return (-1);

	bitShift = 1 << index;

	*n = *n | bitShift;

	return (1);
}
