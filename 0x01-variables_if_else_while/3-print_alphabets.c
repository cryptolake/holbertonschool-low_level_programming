#include <stdio.h>

/**
 * main - prints the alphabet in
 * lower case and uppercase.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
