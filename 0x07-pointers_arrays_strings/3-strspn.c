#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: bytes from accept
 * @accept: input value
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int el;

	while (*s)
	{
		for (el = 0; accept[el]; el++)
		{
			if (*s == accept[el])
			{
				n++;
				break;
			}
			else if (accept[el + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

