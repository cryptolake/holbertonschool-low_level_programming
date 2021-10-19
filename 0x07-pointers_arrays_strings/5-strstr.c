#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack.
 * The terminating null bytes (\0) are not compared.
 *
 * @haystack: string to find in
 * @needle: substr to find
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 **/
char *_strstr(char *haystack, char *needle)
{
	char *p = haystack, *q = needle;
	char *k;

	while (*p != '\0')
	{
		q = needle;
		k = p;
		while (*p == *q && *q != '\0')
		{
			q++;
			p++;
		}
		if (*q == '\0')
			return (k);

		p = k;

		p++;
	}
	return (NULL);

}
