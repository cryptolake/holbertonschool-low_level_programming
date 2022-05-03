#include "search_algos.h"

/**
 * p_search_array - print searched array
 * @array: array to print part of
 * @h: last index
 * @l: first index
 **/
void p_search_array(int *array, size_t h, size_t l)
{
	printf("Searching in array: ");
	for (; l < h; l++)
		printf("%d, ", array[l]);
	printf("%d\n", array[l]);
}

/**
 * binary_search - search array using binary search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: first index of value
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, m;

	if (array == NULL)
		return (-1);

	while (l <= h)
	{
		m = (l + h) / 2;
		p_search_array(array, h, l);
		if (value > array[m])
			l = m + 1;
		else if (value < array[m])
			h = m - 1;
		else
			return (m);
	}
	return (-1);
}
