#include "main.h"
#include <stdlib.h>

/**
 *  _calloc - allocate memory for an array
 *  @nmemb: number of elements
 *  @size: size of each element
 *
 *  Return: pointer to arr
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	if (!nmemb || !size)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (!ptr)
		return (NULL);

	return (ptr);

}
