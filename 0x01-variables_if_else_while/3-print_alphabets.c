#include <stdio.h>
/**
 * main - print_alphabets
 * Return:0
 */

int main(void)
{
	char Small_char = 'a';
	char Big_char = 'A';
	
	while (Small_char <= 'z')
	{
	putchar(Small_char);
	Small_char++;
	}
	
	while (Big_char <= 'Z')
	{
		putchar(Big_char);
		Big_char++;
	}
	putchar('\n');
	return (0);
}

