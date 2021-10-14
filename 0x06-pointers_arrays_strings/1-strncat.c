#include "main.h"
#include <string.h>

/**
 * _strncat - appends the n bytes of src string to dest
 *
 * @dest: string
 * @src: string
 *
 * Return: pointer to dest
 **/
char *_strncat(char *dest, char *src, int n)
{
	int ld, i, j, l, ls;

	ld = strlen(dest);

	ls = strlen(src);

	l = ld + n;

	j = 0;

	if (n > ls) {
		l = ld + ls;
	}
	for (i = ld; i < l; i++) {
		dest[i] = src[j];
		j++;
	}
	dest[l] = '\0';
	return (dest);
}
