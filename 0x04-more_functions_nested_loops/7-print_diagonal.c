#include "main.h"

/**
 * print_diagonal - draws a diagonal line using character "\"
 * @s: number of times the character '\' should be printed
 */

void print_diagonal(int s)
{
	if (s <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < s; i++)
		{
			for (j = 0; j < s; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
