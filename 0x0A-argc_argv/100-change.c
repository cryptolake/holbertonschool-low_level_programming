#include <stdio.h>
#include <stdlib.h>
/**
 * calc_coin - calculate the minimum coin
 * number of m amount.
 *
 * @m: amount
 *
 *
 * Return: how many coins.
 **/
int calc_coin(int m)
{
	int i;

	i = 0;
	while (m > 0)
	{
		if (m - 25 >= 0)
		{
			i++;
			/* printf("m = %d - 25, i = %d\n",m,i); */
			m -= 25;
		}
		else if (m - 10 >= 0)
		{
			i++;
			/* printf("m = %d - 10, i = %d\n",m,i); */
			m -= 10;
		}
		else if (m - 5 >= 0)
		{
			i++;
			/* printf("m = %d - 5, i = %d\n",m,i); */
			m -= 5;
		}
		else if (m - 2 >= 0)
		{
			i++;
			/* printf("m = %d - 2, i = %d\n",m,i); */
			m -= 2;
		}
		else if (m - 1 >= 0)
		{
			i++;
			/* printf("m = %d - 1, i = %d\n",m,i); */
			m -= 1;
		}
	}

	return (i);
}
/**
 * main - get the minumum coin number
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int m;

	if (argc == 2)
	{
		m = atoi(argv[1]);
		if (m <= 0)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n", calc_coin(m));
		}

			return (0);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
