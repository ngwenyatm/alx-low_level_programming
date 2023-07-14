#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int ch = 97;
	
	while( ch != 101 && ch != 113 && ch < 123)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}

