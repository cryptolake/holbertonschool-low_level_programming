#include "search_algos.h"

/**
 * linear_search - search array with linear search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: first index of value
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
