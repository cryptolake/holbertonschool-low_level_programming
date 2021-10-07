#include <stdio.h>

/**
 * fizzbuzz - the famous interview question
 * @i: the number to fizzbuzz
 *
 * Return: nothing
 **/
void fizzbuzz(int i)
{
	if (i % 5 == 0 && i % 3 == 0)
		printf("FizzBuzz ");
	else if (i % 3 == 0)
		printf("Fizz ");
	else if (i % 5 == 0)
		printf("Buzz ");
	else
		printf("%d ",i);
}

/**
 * main - fizz buzz first 100
 *
 * Return (0) success
 **/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		fizzbuzz(i);
	}
	return (0);
}
