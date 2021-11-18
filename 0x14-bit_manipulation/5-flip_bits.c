#include "main.h"

/**
 * flip_bits - find the number of bits you would need
 * to flip to get from one number to another.
 *
 * @n: number
 * @m: number
 * Return: count
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int sb, count = 0;

	sb = n ^ m;

	while (sb)
	{
		if (sb & 1)
			count++;
		sb >>= 1;
	}

	return (count);
}
