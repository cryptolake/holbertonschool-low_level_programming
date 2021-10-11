#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of int
 *
 * @a: array
 * @n: number of array elements to print
 **/
void print_array(int *a, int n)
{
	int i;

	printf("%d", a[0]);
	if (n > 0)
	{
		for (i = 1; i <= n - 1; i++)
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
