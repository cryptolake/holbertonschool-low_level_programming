#include "main.h"
#include <string.h>
#include <stdio.h>

void reverse_array(int *a, int n)
{
	int i;
	int s;

	s = 0;

	for (i = 0; i < n / 2; i++)
	{

		s = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = s;
	}
}
