#include "main.h"


/**
 * actual_sqrt - calculate squareroot
 * @i: counter
 * @n: to calculate
 *
 * Return: square root of n.
 **/
int actual_sqrt(int i, int n)
{
	if (i * i < n)
	{
		return (actual_sqrt(i + 1, n));
	}

	else if (i * i == n)
	{
		return (i);
	}

	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - sqrt recursion
 *
 * @n: number
 *
 * Return: sqrt of number
 **/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (actual_sqrt(2, n));
	}

}
