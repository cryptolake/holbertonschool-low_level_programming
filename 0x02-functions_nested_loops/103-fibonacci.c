#include <stdio.h>

/**
* fib - calculate the sum of the even valued fabonacci
* under k
* @k: value of the limit not to exceed
*
* Return: The sum
**/
long int fib(long int k)
{
	long int y;
	long int i;
	long int j;
	long int f;

	i = 0;
	j = 1;
	f = 0;
	y = 0;

	while (f < k)
	{
		if (f % 2 == 0)
		{
			y = y + f;
		}
		i = j;
		j = f;
		f = i + j;
	}
	return (y);
}

/**
 * main - print and add a newline to the result
 *
 *
 * Return: nothing
 **/
int main(void)
{

	printf("%ld\n", fib(4000000));
	return (0);
}
