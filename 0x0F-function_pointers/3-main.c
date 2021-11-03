#include "3-calc.h"

/**
 * main - performs simple operations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 *
 * Return: 0
 **/
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (strlen(op) != 1 || !(op[0] == '+' || op[0] == '-' ||
		op[0] == '*' || op[0] == '/' ||
		op[0] == '%'))
	{
		printf("ERROR\n");
		exit(99);
	}

	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("ERROR\n");
		exit(100);

	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
