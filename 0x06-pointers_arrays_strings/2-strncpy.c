#include "main.h"
#include <string.h>

/**
 * _strncpy - copy n bytes of string
 * @dest: destination
 * @src: source
 * @n: bytes
 *
 * Return: pointer to dest
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}



	return (dest);
}
