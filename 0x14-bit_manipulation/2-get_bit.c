#include "main.h"
#include <stdio.h>

/**
 * get_bit - get bit of number at position index
 * @n: number
 * @index: index
 * Return: bit
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	while (index)
	{
		if (n == 0)
			return (-1);
		n >>= 1;
		index--;
	}
	return (n & 1);
}
