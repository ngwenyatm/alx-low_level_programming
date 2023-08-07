#include "main.h"
/**
 * _strstr - Finds the first occurrence of a string 
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *str, char *sub)
{
	for (; *str != '\0'; str++)
	{
		char *i = str;
		char *j = sub;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}

		if (*j == '\0')
			return (str);
	}

	return (0);
}

