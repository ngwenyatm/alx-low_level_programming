#include <stdio.h>

/**
 * main - Write a program that prints all possible different combinations of two digits
 * Return:0 on success
 */
int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j !=57)
				{
					putchar(',');
					putchar(' ');
				}
			}
}
}
putchar('\n');
return (0);
}
