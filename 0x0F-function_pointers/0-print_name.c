#include "function_pointers.h"


/**
 * print_name - print name with function
 * @name: the name
 * @f: the function
 *
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
