#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - displays numbers to output
 * @separator: char pointer
 * @n: integer argument
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; ++i)
	{
		printf("%d", va_arg(ap, int));
		if (separator)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
