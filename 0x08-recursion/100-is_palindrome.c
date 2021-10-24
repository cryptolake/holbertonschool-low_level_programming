#include "main.h"

/**
 * rec_strncpy - recursive strncpy
 *
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 **/
void rec_strncpy(char *dest, char *src, int n)
{
	if (n >= 0)
	{
		dest[n] = src[n];
		rec_strncpy(dest, src, n - 1);
	}
}

/**
 * is_palindrome - check if string is
 * palindrom or not.
 *
 * @s: string
 *
 * Return: 1 palindrome, 0 not
 **/
int is_palindrome(char *s)
{
	int l;
	char st[1000];

	l = strlen(s) - 1;

	if (l <= 2 && s[0] == s[l])
	{
		return (1);
	}
	else if (s[0] == s[l])
	{
		rec_strncpy(st, s, l);
		st[l] = '\0';
		return (is_palindrome(st + 1));
	}
	else
	{
		return (0);
	}
}
