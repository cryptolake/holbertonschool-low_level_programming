#include <stdio.h>

/**
 * sum_three_five - get sum of multiples of 3 or 5
 * @k: starting point
 * @l: limit
 *
 * Return: sum of multiples
 **/
int sum_three_five(int k, int l)
{
	int a, i;

	a = 0;
	for (i = k; i < l; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			a += i;
		}
	}
	return (a);
}

/**
 * main - print the sum
 *
 * Return: (0) success
 **/
int main(void)
{
	printf("%d\n", sum_three_five(3, 1024));

	return (0);

}
