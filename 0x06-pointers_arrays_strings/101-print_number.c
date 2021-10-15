#include "main.h"
#include <stdio.h>

void print_number(int n)
{
  int x, i, y;
  char s[50];

  y = 1;
  x = 0;
  if (n != 0)
  {
	if (n < 0)
	{
	  _putchar('-');
	  y = -1;
	}

	while (n != 0)
	{
	  s[x] = ((y * n) % 10) + '0';
	  n /= 10;
	  x++;
	}
	for (i = x - 1; i >= 0; i--)
	{
	  _putchar(s[i]);
	}
  }
  else
  {
	  _putchar('0');
  }
}
