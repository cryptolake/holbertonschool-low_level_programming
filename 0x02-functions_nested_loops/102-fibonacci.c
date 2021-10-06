#include <stdio.h>

void fib(int l)
{
	int x;
	long int f[100];

	f[0] = 0;
	f[1] = 1;

	for (x = 2; x <= l+1; x++)
	{
		f[x] = f[x - 1] + f[x - 2];

		if (x == l+1)
		{
			printf("%ld",f[x]);
		}
		else
		{
			printf("%ld, ",f[x]);
		}
	}
}

int main(void)
{
	fib(50);
	printf("\n");
	return (0);
}
