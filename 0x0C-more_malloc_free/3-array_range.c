#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to resultant array
 */
int *array_range(int min, int max)
{
	int *point;
	int span;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	span = ((max - min) + 1);

	point = malloc(span * sizeof(int));

	if (point == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		point[i] = min++;
	}
	return (point);
}
