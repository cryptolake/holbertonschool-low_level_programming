#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void pchr(va_list ap)
{
	printf("%c", va_arg(ap, int));

}
void pstr(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);

	printf("%s", s);
}

void pint(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

void pflt(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j;
	parse types[] = {{'c', pchr},{'s', pstr},{'i', pint},{'f', pflt}};

	va_start(ap, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == types[j].chr)
			{
				if (i > 0)
					printf(", ");
				types[j].f(ap);
				break;
			}
			j++;
		}
		i++;
	}

	printf("\n");
}
