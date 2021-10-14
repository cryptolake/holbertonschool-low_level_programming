#include "main.h"

char *leet(char *s)
{
	int i, j;
	char a[200];


	a['a'] = '4';
	a['e'] = '3';
	a['o'] = '0';
	a['t'] = '7';
	a['l'] = '1';

	a['A'] = '4';
	a['E'] = '3';
	a['O'] = '0';
	a['T'] = '7';
	a['L'] = '1';

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'o' || s[i] == 't'
			|| s[i] == 'l' || s[i] == 'A' || s[i] == 'E' || s[i] == 'O'
			|| s[i] == 'T' || s[i] == 'L')
		{
			j = s[i];
			s[i] = a[j];
		}

	}
	return s;
}
