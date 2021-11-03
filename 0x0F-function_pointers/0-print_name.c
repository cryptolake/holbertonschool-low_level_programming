#include "function_pointers.h"
#include <string.h>


/**
 * print_name - print name with function
 * @name: the name
 * @f: the function
 *
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL && strlen(name) > 0)
		f(name);
}
