#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory
 * @b: number of bytes given
 * Return: a pointer to the allocated memory slot
 */
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);
	while (point == NULL)
	{
		exit(98);
	}
	return (point);
}

