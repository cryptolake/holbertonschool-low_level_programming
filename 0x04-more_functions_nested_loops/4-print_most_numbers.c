#include "main.h"

/**
 * print_most_numbers - print all digits except 2 and 4
 *
 * Return: nothing
 **/
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
		_putchar(i);
	}
	_putchar('\n');

}
