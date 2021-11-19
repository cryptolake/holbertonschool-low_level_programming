#include "main.h"


/**
 * set_bit - set bit at index to 1
 * @n: number
 * @index: index
 *
 * Return: status
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= 1 << index;

	return (1);
}
