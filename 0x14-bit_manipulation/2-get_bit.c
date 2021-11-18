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
	n >>= index;
	return (n & 1);
}
