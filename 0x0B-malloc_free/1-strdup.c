#include "main.h"
#include <string.h>

char *_strdup(char *str)
{
	char *s;
	unsigned int l, i;


	if (str == NULL)
	{
		return NULL;
	}

	else
	{

		l = strlen(str);
		s = malloc(l+1);
		for (i = 0; i < l; i++)
		{
			s[i] = str[i];
		}

	}

	return s;
}
