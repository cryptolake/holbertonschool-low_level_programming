#include "main.h"

int count_d10(int n)
{
	int x;
	x = 1;
	n /= 10;
	while (n != 0)
	{
		n /= 10;
		x *= 10;
	}
	return x;
}

void print_number(int n)
{
	int x, y, c;

	x = count_d10(n);
	y = 1;
	if (n < 0)
	{
		y = -1;
		_putchar('-');
	}

	while (x != 0)
	{
		c = y * ((n / x) % 10) + '0' ;
		x /= 10;
		_putchar(c);
	}


}
