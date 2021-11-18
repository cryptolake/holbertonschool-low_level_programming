#include "main.h"
#include <stdio.h>

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
 * get_bit - get bit of number at position index
 * @n: number
 * @index: index
 * Return: bit
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > countbit(n) - 1)
		return (-1);
	n >>= index;
	return (n & 1);
}
