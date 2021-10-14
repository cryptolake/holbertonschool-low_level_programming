#include "main.h"
#include <string.h>

int _strcmp(char *s1, char *s2)
{
	int i;
	int b;
	int d;

	b = 1;
	d = 0;
	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && b; i++)
	{
		if (s1[i] != s2[i])
		{
			d = s1[i] - s2[i];
			b = 0;
		}
	}
	return (d);
}
