#include "main.h"

/**
 * main -  multiply two numbers.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: 0
 **/
int main(int argc, char *argv[])
{

	int i, x;

	if (argc == 3)
	{
		for (i = 1; i < argc ; i++)
		{
			x += atoi(argv[i]);
		}
		printf("%d\n",x);
	}
	else
	{
		printf("Error\n");
	}

    return (0);
}
