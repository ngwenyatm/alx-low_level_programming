#include <stdio.h>

/**
 * main - print number combo
 * Return:0 always
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
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
