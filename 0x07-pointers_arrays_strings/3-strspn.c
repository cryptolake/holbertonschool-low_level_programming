#include "main.h"

/**
 * _strspn - number of bytes in the initial segment of s which
 * consist only of bytes from accept
 *
 * @s: string
 * @accept: accepted chars
 *
 * Return: length
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j;
	unsigned int x = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0' && accept[j] != s[i])
			j++;
		if (accept[j] != '\0')
			x++;
		else
			break;
		i++;
	}
	return (x);
}
