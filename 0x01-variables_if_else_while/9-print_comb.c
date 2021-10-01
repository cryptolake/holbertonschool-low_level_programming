#include <stdio.h>

/**
 * main - print all numbers with ',' after
 * each one
 *
 *
 * Return: 0 (Success)
 **/
int main(void)
{
	int i;

	for (i = 48; i <= 56; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');


	return (0);
}
