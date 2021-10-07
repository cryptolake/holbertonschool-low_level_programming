#include <math.h>
#include <stdio.h>


/**
 * isprime - test if the number is prime or not
 * @x: number to test
 *
 * Return: 1 prime 0 not prime
 **/
int isprime(int x)
{
	int i;

	if (x == 2)
	{
		return (1);
	}

	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			break;
			return (0);
		}
	}
	return (1);
}


/**
 * main - get the biggest prime factor of
 * 612852475143.
 *
 * Return: always 0
 **/
int main(void)
{
	int i, x;

	for (i = 2; i <= sqrt(612852475143); i++)
	{
		if (isprime(i) == 1 && i > x)
			x = i;
	}
	printf("%d\n", x);

	return (0);
}
