#include "main.h"
#include <stdlib.h>
#include <string.h>

int word_count(char *str)
{
	int i, x = 0, l;

	l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if (str[i] == ' ')
			x++;
	}

	if (x == 0)
		return (0);

	return (x + 1);
}

int *len_words(char *str)
{
	int x,
		i,
		j = 0,
		lw = 0,
		l;
	int *y;

	l = strlen(str);
	x = word_count(str);
	y = malloc(sizeof(int) * x);

	for (i = 0; i < l; i++)
	{
		j = i;
		lw = 0;
		while (str[j] != ' ')
		{
			++lw;
			++j;
		}

		if (i != j)
		{
			++lw;
			y[j - i] = lw;
		}
	}

	return y;
}

char **strtow(char *str)
{
	char **s;

	int i = 0,
		w = 0,
		j = 0,
		l = strlen(str),
		wc;
	int *y;

	wc = word_count(str);
	y = len_words(str);
	s = malloc(sizeof(char *) * wc);

	for (i = 0; i <= wc; i++)
		s[i] = malloc(sizeof(char) * y[i]);

	i = 0;
	while (i < l)
	{
		j = 0;
		while (str[i] != ' ')
		{
			s[w][j] = str[i];

			j++;
			i++;
		}
		i++;
		if (j > 0)
		{
			s[w][j] = '\0';
		}

		if (str[i] != ' ')
		{
			w++;
		}
	}


	return (s);
}
