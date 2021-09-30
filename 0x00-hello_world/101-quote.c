#include <stdio.h>
#include <unistd.h>

/**
* main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19"
* without using printf or puts.
*
* Return: nothing
*/
int main(void)
{
	char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, q, 58);
	write(2, "FAILURE\n", 7);
	return (1);
}
