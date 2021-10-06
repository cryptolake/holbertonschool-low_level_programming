#include <stdio.h>

int main(void)
{
	int a,i;

	a = 0;
	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			a += i;
		}
	}
	printf("%d\n",a);
}
