#include <stdio.h>

/**
 * main - prints the alphabet
 * in lowercase without q and e.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 113 && i != 101)
			putchar(i);
	}
	putchar('\n');

	return (0);
}
