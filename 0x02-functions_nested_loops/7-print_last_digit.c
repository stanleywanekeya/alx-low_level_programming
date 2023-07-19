#include "main.h"

/**
 * print_last_digit - Entry point of modulos function
 *
 * @c: input integer
 *
 * Return: last digit f integer
 */
int print_last_digit(int c)
{
	int a;
	
	if (c < 0)
		c = -c;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar(a + '0');

	return (a);
}
