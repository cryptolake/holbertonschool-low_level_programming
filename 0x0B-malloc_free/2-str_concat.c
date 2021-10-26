#include "main.h"
/**
 * str_concat - concat two strings into new string
 * @s1: string
 * @s2: string
 *
 * Return: new string
 **/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int l, l1, l2, i, j;

	if (s1 == NULL)
		l1 = 0;
	else
		l1 = strlen(s1);

	if (s2 == NULL)
		l2 = 0;
	else
		l2 = strlen(s2);

	l = l1 + l2 + 1;

	s = malloc(l);
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';

	return (s);
}
