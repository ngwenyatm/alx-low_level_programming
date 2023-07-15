#include <stdio.h>

/**
 * main - print number combo
 * Return:0
 */

int main(void)
{
	int i;

	for (i = 48; i <= 97; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
