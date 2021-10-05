#include "main.h"


/**
 * print_last_digit - get last digit of number
 *
 * Return: last digit
 **/
int print_last_digit(int n)
{
	int d;

	d = n % 10;
	_putchar(d);
	return (d);
}
