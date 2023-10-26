#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i;

	for (i = 31; i >= 0; i--)
	{
		int shift = n >> i;

		if (shift & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
