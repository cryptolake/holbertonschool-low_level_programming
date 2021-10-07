#include "main.h"

/**
 * print_line - print line '_' n times
 * @n: number of times
 *
 * Return: nothing
 **/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
