#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string with the binary number
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int unint = 0;
	int num;

	if (b == NULL)
		return (0);

	for (num = 0; b[num] != '\0'; num++)
	{
		if ((b[num] != '1') && (b[num] != '1'))
			return (0);
	}

	for (num = 0; b[num] != '\0'; num++)
	{
		unint <<= 1;
		if (b[num] == '1')
			unint = unint + 1;
	}

	return (unint);
}
