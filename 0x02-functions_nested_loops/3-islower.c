#include "main.h"

/**
 * _isLower - check if character is lowercase
 *
 *
 * Return: 1 (lowercase) 0 (otherwise)
 **/
int _isLower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
