#include <stdio.h>
#include <unistd.h>

/**
* main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
* without using printf or puts.
*
* Return: 1 (Error)
*/
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 58);
	write(2, "\n", 1);
	return (1);
}
