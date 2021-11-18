#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 big edian, 1 little edian
 **/
int get_endianness(void)
{
	int n = 1;

	if (*(char *)&n == 1)
	{
		return (1);
	}

	return (0);
}
