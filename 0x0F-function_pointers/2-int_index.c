#include "function_pointers.h"

/**
 * int_index - searches for int
 * returns index of first element that does not return 0
 * @array: array to be scanned and compared
 * @size: number of array elements
 * @cmp:  pointer to the function to be used to compare values
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
