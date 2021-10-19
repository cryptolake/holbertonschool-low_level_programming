#include "main.h"


/** _strchr - locate a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: pointer to character if found NULL otherwhise
 **/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0' && *s != c)
	{
		i++;
		s += i;
	}

	if (*s == '\0')
		return (NULL);
	else
		return (s-1);

}
