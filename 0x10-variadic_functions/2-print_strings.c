#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings in variadic functions
 * @separator: pointer argument
 * @n: integer argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
