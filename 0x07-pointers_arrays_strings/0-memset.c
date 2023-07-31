#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: address of memory
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

