#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
				{"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i = 0;

	if (s == NULL || strlen(s) != 1 ||
		!(s[0] == '+' || s[0] == '-' ||
		s[0] == '*' || s[0] == '/' ||
		s[0] == '%'))
		return (NULL);

	while (ops[i].op[0] != s[0] && ops[i].op != NULL)
		i++;

	return (ops[i].f);
}
