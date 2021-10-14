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
	int ls, ld, i;

	ls = strlen(src);
	ld = strlen(dest);

	for (i = 0; i < ls; i++)
	{
		dest[ld + i] = src[i];
	}
	dest[ls + ld] = '\0';


	return (dest);
}
