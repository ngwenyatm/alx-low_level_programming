#include "main.h"

/**
 * rev_string - Reverses a string
 ** @s: string
 ** Return: reversed string
 **/

void rev_string(char *s)
{
	char rv = s[0];
	int index = 0;

	int i;

	while (s[index] != '\0')
		index++;

	for (i = 0; i < index; i++)
	{
		index--;
		rv = s[i];

		s[i] = s[index];
		s[index] = rv;
	}
}
