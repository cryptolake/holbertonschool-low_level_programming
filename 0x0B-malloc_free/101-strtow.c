#include "main.h"
#include <stdlib.h>
#include <string.h>

int word_count(char *str)
{
	int i,
		x = 0,
		l;

	l = strlen(str);

	for (i = 0; i < l; i++)
	{
		if(str[i] != ' ')
		{
			x++;
			while (str[i] != ' ')
				i++;
		}
	}

	return (x);
}

int *len_words(char *str)
{
	int x,
		i,
		j = 0,
		wc = 0,
		l;

	int *y;

	l = strlen(str);
	x = word_count(str);
	y = malloc(sizeof(int) * x);

	for (i = 0; i < l; i++)
	{
		j = 0;
		if (str[i] != ' ')
		{
			while(str[i] != ' ')
			{
				i++;
				j++;
			}
			y[wc] = j;
			wc++;
		}
	}

        return y;
}

char **strtow(char *str)
{
	char **s;
	int i = 0,w = 0,j,l,wc, *y;

	if (str == NULL)
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	l = strlen(str);
	y = len_words(str);
	s = malloc(sizeof(char *) * (wc + 1));

	for (i = 0; i < wc; i++)
		s[i] = malloc(sizeof(char) * y[i]);

	w = 0;
	for (i = 0; i < l; i++)
	{
		if (str[i] != ' ')
		{
			for (j = 0; j < y[w]; j++)
			{
				s[w][j] = str[i];
				i++;
			}
			s[w][j] = '\0';
			w++;
		}
	}
	w++;
	s[w] = NULL;
	free(y);

	return (s);
}
