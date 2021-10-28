#include "main.h"

/**
 *  _calloc - allocate memory for an array
 *  @nmemb: number of elements
 *  @size: size of each element
 *
 *  Return: pointer to arr
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		ptr[i] = 0;


	return (ptr);
}
