#include "main.h"
#include <string.h>

/**
 * _strcmp - compare two strings and return their difference
 * @s1: string
 * @s2: string
 *
 *
 * Return: difference
 **/
int _strcmp(char *s1, char *s2)
{
	int i, b, d;

	b = 1;
	d = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && b; i++)
	{
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			b = 0;
		}
	}
	return (d);
}
