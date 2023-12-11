#include "main.h"
/**
 * _strpbrk - scans a string for char
 * @s:string to be scanned
 * @accept: char to searh for
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
	s++;
	}

return ('\0');
}
