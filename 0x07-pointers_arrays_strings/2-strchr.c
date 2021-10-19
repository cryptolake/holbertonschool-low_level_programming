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
	char *p;

	p = s;

	while (*p != '\0' && *p != c)
		p += 1;

	if (*p != c)
		return (NULL);
	else
		return (p);

}
