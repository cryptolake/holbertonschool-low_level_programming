#include "main.h"

/**
 * _strpbrk -  locates the first occurrence in the string s of any
 * of the bytes in the string accept
 *
 * @s: string
 * @accept: bytes to search for
 *
 * Return: pointer to first occurance
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *p;

	p = s;

	while (*p != '\0')
	{
		i = 0;
		while (accept[i] != '\0' && accept[i] != *p)
			++i;
		if (accept[i] == *p)
		{
			return (p);
		}
		p++;
	}
	return (NULL);
}
