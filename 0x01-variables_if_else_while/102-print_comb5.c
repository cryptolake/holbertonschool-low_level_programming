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

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = i; k <= '9'; k++)
			{
				if (k > i)
				{
					l = '0';
				}
				else
				{
					l = j + 1;
				}
				for (; l <= '9'; l++)
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
