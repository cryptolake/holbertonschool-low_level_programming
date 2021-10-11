#include "main.h"
#include <stdio.h>

/**
 * _strlen - get length of string
 *
 * @s: string
 *
 * Return: length
 **/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - reverse string
 *
 * @s: string
 **/
void rev_string(char *s)
{
	int i;
	int	j;
	char str[10000];

	i = _strlen(s) - 1;
	j = 0;

	while (i >= 0)
	{
		str[j] = s[i];
		j++;
		i--;
	}
	str[j] = '\0';
	i = 0;

	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}

}
