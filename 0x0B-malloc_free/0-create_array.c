#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array and initialize with c
 * @size: size of the array
 * @c: char to initialize array
  * Return: pointer to array or NULL if it fails
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str;

	str = malloc(size * sizeof(char));
	if (size == 0 || str == ‘\0’)
		return (‘\0’);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

