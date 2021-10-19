#include "main.h"

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
			return p;
		}
		p++;
	}
	return NULL;
}
