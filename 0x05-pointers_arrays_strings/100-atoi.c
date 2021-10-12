#include "main.h"
#include <stdio.h>

/**
 * _strlen - get length of string
 *
 * @s: string
 *
 * Return: length
 **/
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}

int isn(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int sign(char *s,int l)
{
	int i,n;

	n = 1;

	i = 0;
	while (!(isn(s[i])) && i <= l)
	{
		if (s[i] == '-')
		{
			n = -n;
		}
		i++;
	}
	return n;
}


int numl(char*s, int i)
{
	while (isn(s[i]))
	{
		i++;
	}
	return i;
}


int _atoi(char *s)
{
	int n;
	int l, i, j;
	int k;
	int f;

	l = _strlen(s);
	n = 0;
	f = 0;

	for (i = 0; i < l && f == 0; i++)
	{
		if (isn(s[i]))
		{
			f = 1;
		}

	}

	if (f)
	{
		i--;
		k = sign(s,l);
		for (j = i; j <= numl(s,i)-1; j++)
		{
			n = n + k * (s[j] - '0');
			if (j < numl(s,i)-1)
				n *= 10;
		}
		return n;
	}
	else
	{
		return (0);
	}
}
