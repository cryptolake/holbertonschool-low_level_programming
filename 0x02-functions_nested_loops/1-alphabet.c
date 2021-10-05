#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0
 **/
void print_alphabet(void)
{
	int i;

	for (i = 95; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
