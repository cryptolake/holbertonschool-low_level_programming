#include "main.h"


/**
 * _strchr - locate a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer to character
 * if found NULL otherwhise
 **/
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = s;

	i = 0;
	while (*p != '\0' && *p != c)
	{
		i++;
		p += i;
	}

	if (*p != c)
		return (NULL);
	else
		return (p - 1);

}
