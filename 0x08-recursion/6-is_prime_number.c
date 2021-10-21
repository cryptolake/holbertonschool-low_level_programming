#include "main.h"

/**
 * is_prime - find if number is prime
 *
 * @n: number
 * @i: numbers to test
 *
 * Return: 1 (number is prime) 0 (is not)
 **/
int is_prime(int i, int n)
{
	if (n % i != 0 && i < n)
		return (is_prime(i + 1, n));
	else if (n % i == 0 && i < n)
		return (0);
	return (1);
}

/**
 * is_prime_number - check number is prime
 *
 * @n: number to test
 *
 *
 * Return: 1 (number is prime) 0 (is not)
 **/
int is_prime_number(int n)
{
	if (n == 1 || n == 0 || n == -1)
		return (0);

	else
		return (is_prime(2, n));
}
