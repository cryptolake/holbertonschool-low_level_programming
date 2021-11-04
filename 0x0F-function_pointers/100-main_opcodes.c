#include <stdlib.h>
#include <stdio.h>

/**
 * main - print opcodes of itself
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: 0
 *
 **/
int main(int argc, char *argv[])
{

	unsigned char *ptr;
	int i, n;

	ptr = (unsigned char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);
	if (n <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < n; i++)
	{
		printf("%02x", *(ptr + i));
		if (i != n - 1)
		putchar(' ');

	}
		putchar('\n');

	return (0);
}
