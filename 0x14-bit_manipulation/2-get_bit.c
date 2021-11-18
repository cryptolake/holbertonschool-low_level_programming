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
	/* if (n == 1 && index > 0) */
	/* 	return (-1); */

	while (n && index)
	{
		n >>= 1;
		index--;
	}
	/* if (!n && index > 0) */
	/* 	return (-1); */
	return (n & 1);
}
