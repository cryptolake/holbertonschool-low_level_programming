#include "main.h"
#include <stdio.h>

void print_number(int n)
{
	int x, y, r;

	x = 0;

	if (n < 0)
		y = -n;
	else
		y = n;

	if (n == 0)
	{
		_putchar('0');
	}

	while (y != 0)
	{
		r = y % 10;
		x = x * 10 + r;
		y = y / 10;
	}
	if (n < 0)
		_putchar('-');

	while (x > 0)
	{
		_putchar((x % 10) + '0');
		x = x / 10;
	}
	if (n % 10 == 0)
	{
		_putchar('0');
	}
}
