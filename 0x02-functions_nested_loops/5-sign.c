#include "main.h"

/**
 * print_sign - prints whether a num is +,0 or -
 *
 * @num: the int
 *
 * Return: 1 prints + if num is greater than zero,0 if num is zero
 * and - if num is less than zero
 */

int print_sign(int num)
	{
		if (num > 0)
		{
			_putchar('+');
			return (1);
		} else if (num == 0)
		{
			_putchar(48);
			return (0);
		} else if (num < 0)
		{
			_putchar('-');
		}
			return (-1);
	}

