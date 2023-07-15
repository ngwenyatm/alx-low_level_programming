#include <stdio.h>
/**
 * main - reverse printing
 * Return:0
 */

int main(void)
{
	int alpha = 122;

	while (alpha >= 97)
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
