#include "main.h"

/**
 * print_last_digit - get last digit of number
 *
 * Return: last digit
 **/
int print_last_digit(int n)
{
	int d;

	if (n >= 0)
	{
		d = n % 10;
		_putchar(d+48);
		return (d);
	}
	else
	{
		d = -(n % 10);
		_putchar(d+48);
		return (d);
	}
}
