#include "main.h"


/**
 * factorial - calculate factorial of n
 * @n: number
 *
 *
 * Return: result
 **/
int factorial(int n)
{
	if (n > 1)
	{
		return (n * factorial(n - 1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}

}
