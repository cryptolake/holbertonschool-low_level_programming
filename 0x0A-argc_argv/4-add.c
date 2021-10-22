#include "main.h"
#include <string.h>

/**
 * check - check if array of strings is numeric
 * @len: length of array
 * @s: array of strings
 *
 * Return: 1 (number) 0 (not number)
 *
 **/
int check(int len, char *s[])
{
	int i, j, l;

	for (i = 1; i < len; i++)
	{
		l = strlen(s[i]);
		for (j = 0; j < l; j++)
		{
			if (s[i][j] < '0' || s[i][j] > '9')
			{
				return (0);
			}
		}
	}

	return (1);
}
/**
 * main -  add numbers
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

	if (check(argc, argv))
	{
		for (i = 1; i < argc ; i++)
		{
			x += atoi(argv[i]);
		}
		printf("%d\n", x);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
