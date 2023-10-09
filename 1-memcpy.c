#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: memory address
 *@src: copy address
 *@n: bytes
 *Return: copied memory*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; i++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
