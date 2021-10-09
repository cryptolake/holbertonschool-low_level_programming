#include "main.h"

void print_number(int n)
{
	int x, y, r;

	x = 0;
	y = n;

	if (n > 0)
	{
		while (y != 0)
		{
			r = y % 10;
			x = x * 10 + r;
			y = y / 10;
		}

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
	else if (y < 0)
	{
		y = -y;

		_putchar('-');

		while (y != 0)
		{
			r = y % 10;
			x = x * 10 + r;
			y = y / 10;
		}
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
	else
	{
		_putchar('0');

	}
}
