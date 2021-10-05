#include "main.h"

/**
 * _isalpha - check whether character is alpabetical
 * or not.
 * @c: the character
 *
 * Return: 1 (alphabetical) 0 (otherwise)
 **/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
