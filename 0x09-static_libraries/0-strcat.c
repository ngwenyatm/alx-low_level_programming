#include "main.h"
/**
 * _strcat - concatenates 2 strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *a, char *b)
{
	int i;
	int j;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (b[j] != '\0')
	{
		a[i] = b[j];
		i++;
		j++;
	}

	a[i] = '\0';
	return (a);
}
