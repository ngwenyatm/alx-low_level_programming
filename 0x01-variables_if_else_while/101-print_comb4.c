#include <stdio.h>
/*
 * main - prints all possible different combinations of three digits
 * Return:0 if success
 */

int main(void)
{
	int i;
	int j;
	int k;

	for (i = 48; i < 58; n++)
	{
		for (j = 49; j < 58; j++)
		{
			for ( k = 50; k < 58; k++)
			{
			if (k > j && j > i)
			{
			putchar(i);
			putchar(j);
			putchar(k);

	if (i != 55 || j != 56)
	{
	putchar(',');
	putchar(' ');
	}
			}
			}
	}
}
}
