#include "main.h"
#include <stddef.h>
/**
 * _strchr - Entry point
 * @str: string
 * @c: char
 * Return: Always 0
 */
char *_strchr(char *str, char c)
{
	int i = 0;

	for (; str[i] >= '\0'; i++)
	{
		if (str[i] == c)
		return (&str[i]);
	}
	return (0);
}
