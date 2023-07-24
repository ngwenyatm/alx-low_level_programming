#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: string to be evaluated
 * Return: length
 */
int _strlen(char *s)
{
	int lgth = 0;

	while (*s != '\0')
	{
		lgth++;
		s++;
	}

	return (lgth);
}
