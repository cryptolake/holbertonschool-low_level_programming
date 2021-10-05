#include "main.h"

/**
 * times_table - show the times table of 9
 *
 * Return: nothing
 **/
void times_table(void)
{
	int a, b, c, d;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = (a * b) % 10;
			d = (a * b) / 10;
			if (d > 0)
				_putchar(d + '0');
			_putchar(c + '0');
			_putchar(',');
			if (a * b >= 10)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}


}
