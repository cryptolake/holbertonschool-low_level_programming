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
	if (index != 0 && n == 0)
		return (-1);

	if (index == 0)
		return (n & 1);

	return (get_bit(n >> 1, index - 1));
}
