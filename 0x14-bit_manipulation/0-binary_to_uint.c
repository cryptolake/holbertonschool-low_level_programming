#include "main.h"


/**
 * poww - get n1^n2
 * @n1: number
 * @n2: number
 * Return: Result
 **/
unsigned int poww(unsigned int n1, unsigned int n2)
{
	if (n2 == 0)
		return (1);
	if (n2 == 1)
		return (n1);
	return (n1 * poww(n1, n2 - 1));
}


/**
 * binary_to_uint - convert binary string to unsigned
 * int.
 *
 * @b: binary string
 * Return: result or (0) if it failed
 *
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, l;
	int i, j = 0;

	if (!b)
		return (0);

	i = strlen(b) - 1;

	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] - '0')
			n += poww(2, j);
		i--;
		j++;
	}

	return (n);
}
