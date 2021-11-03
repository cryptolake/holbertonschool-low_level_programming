#include "3-calc.h"

int test_op(char *op)
{
	if (op == NULL)
		return (0);

	if (strlen(op) == 1 &&
		(op[0] == '+' || op[0] == '-' ||
		op[0] == '*' || op[0] == '/' ||
		op[0] == '%'))
	{
		return (1);
	}

	return (0);
}

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
				{"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i = 0;

	if (s == NULL || !test_op(s))
		return (NULL);

	while (ops[i].op[0] != s[0] && ops[i].op != NULL)
		i++;

	return (ops[i].f);
}
