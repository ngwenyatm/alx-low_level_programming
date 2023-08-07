#include "main.h"
/**
 * _strspn - returns the length of the initial substring
 * of the string
 * @str: string
 * @accept: sub containing char
 * Return: Always 0
 */
unsigned int _strspn(char *str, char *accept)
{
	unsigned int i = 0;
	int j;

	while (*str)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*str == accept[j])
			{
				i++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (i);
		}
		str++;
	}
	return (i);
}

