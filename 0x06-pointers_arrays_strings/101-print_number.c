#include "main.h"

int reverse_int(int n)
{
	int rev;
	rev = 0;

	while (n != 0)
	{
		rev = (rev * 10) + n % 10;
		n /= 10;
	}
	return rev;
}

void print_number(int n)
{
	int y;
	int m;

	y = 1;

	n = reverse_int(n);
	/* printf("m = %d\n",m); */

	if (n != 0)
	{
		if (n < 0)
		{
			_putchar('-');
			y = -1;
		}

		while (n != 0)
		{
			m = y * (n % 10);
			/* printf("m = %d \n",m); */

			_putchar(m + '0');
			n /= 10;
		}
	}

	else
	{
		_putchar('0');
	}
}
