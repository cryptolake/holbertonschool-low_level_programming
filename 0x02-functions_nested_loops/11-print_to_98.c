#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print count from n to 98
 * @n: number
 *
 * Return: nothing
 **/
void print_to_98(int n)
{
	int a, i;

	i = n;
	if (n < 98)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}
	while (i != 98)
	{
		printf("%d, ", i);

		i += a;
	}
	printf("98\n");
}
