#include <stdio.h>

/**
 * main - print all numbers in base 16
 *
 *
 * Return: 0 (Success)
 **/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}

	for (i = 65; i <= 70; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
