#include "main.h"
/**
 * puts2 - prints every other character of a string, starting with the first 1
 * @str: the string
 * Return: string characters
 **/
void puts2(char *str)
{
	int l = 0;
	int m = 0;
	char *n = str;
	int o;

	while (*n != '\0')
	{
		n++;
		l++;
	}
	m = l - 1;

	for (o = 0 ; o <= m ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
