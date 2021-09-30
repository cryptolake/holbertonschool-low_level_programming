#include <stdio.h>
/**
 * main - prints out the size of a char, int, long int, long long int and float
 *
 * Return: nothing
 */

int main(void)
{
	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\nSize of a long int: %d byte(s)n\nSize of a long long int: %d byte(s)\nSize of a float: %d byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}
