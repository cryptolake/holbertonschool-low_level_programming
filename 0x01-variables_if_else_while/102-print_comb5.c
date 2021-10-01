#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers.
 *
 *
 *
 * Return: 0 (sucess)
 **/
int main(void)
{
	int i, j;
	int k, l;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = i; k <= 57; k++)
			{
				for (l = j; l <= 57; l++)
				{
					if (!(k == i && l == j))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
				if (!(k == 57 && l == 57 && j == 56 && i == 57))
				{
					putchar(',');
					putchar(' ');
				}
				}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
