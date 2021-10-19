#include "main.h"

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
		if (accept[j] == '\0')
			break;
		else
			x++;
		i++;
	}
	return x;
}
