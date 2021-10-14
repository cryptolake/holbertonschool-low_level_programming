#include "main.h"
#include <string.h>

/**
* _strcat - concatonate two strings
* @dest: string to contonate into
* @src: string to add
*
* Return: pointer of dest
**/
char *_strcat(char *dest, char *src)
{
	int ls, ld , i, j, l;
	ls = strlen(src);
	ld = strlen(dest);
	l = ls + ld;
	j = 0;

	for (i = ld; i < l-1; i++)
	{
		dest[i] = src[j]; 
		j++;
	}
	dest[l] = '\0';


	return (dest);
}
