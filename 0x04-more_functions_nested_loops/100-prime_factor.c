#include <math.h>
#include <stdio.h>

/**
 * main - get the biggest prime factor of
 * 612852475143.
 *
 * Return: always 0
 **/
int main(void)
{
	long int i, x, n;

	n = 612852475143;

	for (i = 2; i <= sqrt(n); i++)
	{
		while (n % i == 0)
		{
			x = i;
			n = n / i;
		}
	}


	x = n;
	printf("%ld\n", x);
	return (0);
}
