#include "main.h"

/**
 * clear_bit - clear bit at index to 1
 * @n: number
 * @index: index
 *
 * Return: status
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* size of unsigned long int  */
	if (index > 32)
		return (-1);

	*n &=  ~(1 << index);

	return (1);
}
