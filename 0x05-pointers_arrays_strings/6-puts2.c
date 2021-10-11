#include "main.h"
#include <string.h>

/**
 * puts2 - print every other character of string
 * @str: string
 *
 **/
void puts2(char *str)
{
	int i, j;

	i = strlen(str);

	for (j = 0; j <= i - 1; j++)
	{
		if (j % 2 == 0)
			_putchar(str[j]);
	}
	_putchar('\n');

}
