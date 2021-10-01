#include <stdio.h>

/**
 * main - prints out the alphabet
 *
 * Return: 0 success
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
