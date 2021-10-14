#include "main.h"

/**
 * isalpha2 - check if character is alphabetical
 * @c: character
 *
 * Return: 2 alphabetical highcase
 * 1 alaphabetical lowercase
 * 0 non alphabetical
 **/
int isalpha2(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (2);
	}
	else
	{
		return (0);
	}

}

/**
 * cap_string - capitulize each word of string
 * @s: string
 *
 * Return: pointer to s
 **/
char *cap_string(char *s)
{
	int i, w;

	w = 1;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (isalpha2(s[i]) == 2)
		{
			w = 0;
		}

		if (w && isalpha2(s[i]))
		{
			s[i] = s[i] - 32;
			w = 0;
		}
		else if ((s[i] >= '0' && s[i] <= '9') && w)
		{
			w = 0;
		}

		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
			|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
			|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
			|| s[i] == '}')
		{
			w = 1;
		}

	}
	return (s);
}
