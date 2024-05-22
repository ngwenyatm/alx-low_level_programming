#include "search_algos.h"

/**
  * binary_search - searches for value in sorted array using Binary search
  * @array: A pointer to first element of array.
  * @size: The number of elements 
  * @value: The value to search.
  *
  * Return: If the value is absent or array is NULL, -1.
  *         Otherwise, the index of value.
  *
  **/
 
 int binary_search(int *array, size_t size, int value)
{
	size_t i, left_sec, right_sec;

	if (array == NULL)
		return (-1);

	for (left_sec = 0, right_sec = (size - 1); right_sec >= left_sec;)
	{
		printf("Searching in array: ");
		for (i = left_sec; i < right_sec; i++)
			printf("%d%s\n", array[i], (i == size - 1) ? "" : ", ");

		i = (left_sec + (right_sec - left_sec) / 2);
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right_sec = (i - 1);
		else
			left_sec = (i + 1);
	}
	return (-1);
}
