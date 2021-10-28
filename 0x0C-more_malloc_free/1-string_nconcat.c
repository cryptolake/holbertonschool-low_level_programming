#include "main.h"


/**
 * string_nconcat - concatenates two strings with
 * specified bytes
 *
 * @s1: string
 * @s2: string
 * @n: bytes
 *
 * Return: new string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int l, l1, l2, i, j;


	if (s1 == NULL)
		l1 = 0;
	else
		l1 = strlen(s1);

	if (s2 == NULL)
		l2 = 0;
	else
		l2 = strlen(s2);

	if (n > l2)
		n = l2;

	l = l1 + n + 1;

	s = malloc(l);
	if (s == NULL)
		return (NULL);

	i = 0;
	while (i < l1)
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < n)
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';

	return (s);
}
