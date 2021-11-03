#include "function_pointers.h"


/**
 * array_iterator - do action on every element of array
 * @array: the array
 * @size: size of the array
 * @action: the action to perform
 *
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size > 0 && array != NULL && action != NULL)
		for (i = 0; i < size; i++)
			action(array[i]);
}
