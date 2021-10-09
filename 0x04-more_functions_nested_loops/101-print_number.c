#include "main.h"

void print_number(int n)
{
	int x, r;
	x = 0;

	if (n > 0)
	{
		while (n != 0)
		{
			r = n % 10;
			x = x * 10 + r;
			n = n / 10;
		}

		while (x > 0)
		{
			_putchar((x % 10) + '0');
			x = x / 10;
		}
	}
	else if (n < 0)
	{
		n = -n;

		_putchar('-');

		while (n != 0)
		{
			r = n % 10;
			x = x * 10 + r;
			n = n / 10;
		}
		while (x > 0)
		{
			_putchar((x % 10) + '0');
			x = x / 10;
		}
	}
	else
	{
		_putchar('0');

	}
}
