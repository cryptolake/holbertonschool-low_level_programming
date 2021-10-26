#include "main.h"


/**
 * create_array - create array of chars of
 * specified size
 * @size: size
 *
 * Return: array addr
 **/
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	s = malloc(sizeof(c) * size);
	i = 0;
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			s[i] = c;
		}
		return (s);
	}
}
