#include "main.h"

/**
 * print_triangle - print trianble
 * @size: base
 *
 **/
void print_triangle(int size)
{
	int i, j, l;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j <= size - i - 1; j++)
				_putchar(' ');

			for (l = 1; l <= i; l++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
