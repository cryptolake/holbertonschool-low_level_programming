#include "main.h"
#include <stdio.h>

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
		if (m % 25 == 0)
		{
			i++;
			m -= 25;
		}
		else if (m % 10 == 0)
		{
			i++;
			m -= 10;
		}
		else if (m % 5 == 0)
		{
			i++;
			m -= 5;
		}
		else if (m % 2 == 0)
		{
			i++;
			m -= 2;
		}
		else
		{
			i++;
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
		printf("Error");

		return (1);
	}
}
