#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	char *s;
	unsigned int l, i;

	l = strlen(str);
	s = malloc(l);

	if (str == NULL || s == NULL)
	{
		return NULL;
	}

	for (i = 0; i < l; i++)
	{
		s[i] = str[i];
	}


	return s;
}
