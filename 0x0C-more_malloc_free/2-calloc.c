#include <stdlib.h>
#include "main.h"
/**
 * _memset - function that allocates memory for an array
 * @s: memory slot to fill
 * @b: char to copy
 * @n: how many times b should be copied
 * Retun: pointer to the memory slot
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: num of elements
 * @size: size of element
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *parr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	parr = malloc(size * nmemb);

	if (parr == NULL)
		return (NULL);
	_memset(parr, 0, nmemb * size);
	return (parr);
}

