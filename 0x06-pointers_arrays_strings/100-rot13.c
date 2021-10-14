#include "main.h"

/**
 * rot13 - encodes string in rot13 cipher
 * @s: string
 *
 * Return: pointer to string
 **/
char *rot13(char *s)
{

	int i, j, b;
	char *a2;
	char *a1;

	a1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	a2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		b = 1;
		for (j = 0; a1[j] != '\0' && b; j++)
		{
			if (s[i] == a1[j])
			{
				s[i] = a2[j];
				b = 0;
			}
		}
	}
	return (s);
}
