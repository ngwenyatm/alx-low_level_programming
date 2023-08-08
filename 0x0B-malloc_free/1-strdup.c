#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to newly allocated memory
 * which contains a copy of  parameter
 * @str: string given
 * Return: 0
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;

	if (str == ‘\0’)
		return (‘\0’);

	while (str[i] != '\0')
		i++;
	char *addy;

	addy = malloc((i + 1) * sizeof(char));

	if (addy == ‘\0’)
		return (‘\0’);

	for (j = 0; str[j]; j++)
		addy[j] = str[j];
	return (addy);
}
