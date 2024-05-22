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
	if (array == NULL)
	{
		return -1;
	}
	size_t left_sec = 0;
	size_t right_sec = (size - 1);
	
	while (left_sec <= right_sec)
	{
		size_t i = left + (right_sec - left_sec) / 2;
		if (array[i] == value)
		{
		       return i;
		}
		else if(array[i] > value)
		{
			right_sec = (i - 1);
		}
		else
		{
			left_sec = (i + 1);
		}
	}
	return -1;
}
