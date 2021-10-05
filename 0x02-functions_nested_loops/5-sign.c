#include "main.h"

/**
 * print_sign - determines the sign of number
 * @n: number
 *
 *
 * Return: 1 (positive) 0 (zero) -1 (negative)
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	return (0);
}
