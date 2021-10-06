#include "main.h"


/**
 * print_times_table - get times table of n
 * @n: number
 *
 * Return: nothing
 **/
void print_times_table(int n)
{
	int a, b, x;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				x = a * b;
				if (x > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(x / 100 + '0');
					_putchar((x / 10) % 10 + '0');
				}
				else if (x > 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(x / 10 + '0');
				}
				else
				{
					if (b != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}

				_putchar(x % 10 + '0');
			}
			_putchar('\n');
		}

	}
}
