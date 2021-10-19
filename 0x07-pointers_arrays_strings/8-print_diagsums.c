#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - print the sum of the
 * two diagonals of a square matrix of integers
 *
 * @a: matrix
 * @size: matrix size
 *
 **/
void print_diagsums(int *a, int size)
{
	int i;
	int x = 0,
		y = 0;

	for (i = 0; i < size; i++)
	{
		x += a[i];
		y += a[(size - 1) - i];
		a += size;
	}

	printf("%d, %d\n", x, y);
}
