#include "main.h"

/**
 * _memset -  fills the first n bytes of the memory area with a constant byte
 * @s: memory addess
 * @b: byte
 * @n: length of area
 *
 * Return: s
 **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return s;
}
