#include "main.h"

/**
 * more_numbers - print number from 0 to 14
 *
 * Return: nothing
 **/
void more_numbers(void)
{
	int i, x, y;
	char c;

	c = '9';

	for (i = 0; i <= 9; i++)
	{
		for (y = 0; y <= 1; y++)
		{
			if (y == 1)
				c = '4';
			for (x = '0'; x <= c; x++)
			{
				if (y == 1)
					_putchar('1');
				_putchar(x);
			}
			c = '9';
		}
		_putchar('\n');
	}
}
