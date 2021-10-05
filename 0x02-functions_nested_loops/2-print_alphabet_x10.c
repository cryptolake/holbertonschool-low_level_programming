#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * in lowecase.
 *
 * Return: 0
 **/
void print_alphabet_x10(void)
{
	int i, x;

	x = 0;
	i = 95;
	while (x <= 10)
	{
		x++;
		while (i <= 122)
		{
			i++;
			_putchar(i);
		}
		_putchar("/n");
	}
}
