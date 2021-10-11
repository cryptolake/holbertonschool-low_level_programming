#include "main.h"
#include <string.h>

/**
 * puts_char - print the second half of string
 * @str: string
 *
 **/
void puts_half(char *str)
{
	int i, n, l;

	l = strlen(str);

	if (l % 2 == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l - 1) / 2;
		n--;
	}

	for (i = n; i < l; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
