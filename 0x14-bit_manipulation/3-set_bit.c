#include "main.h"

/**
 * countbit - count the bit length
 * @n: number
 * Return: number of bits
 **/
unsigned int countbit(unsigned int n)
{
	unsigned int count = 0;

	if (n == 0)
		return (1);

	while (n)
	{
		count++;
		n >>= 1;
	}
	return (count);
}

/**
 * set_bit - set bit at index to 1
 * @n: number
 * @index: index
 *
 * Return: status
 **/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > countbit(*n) - 1)
		return (-1);

	*n |= 1 << index;

	return (1);
}
