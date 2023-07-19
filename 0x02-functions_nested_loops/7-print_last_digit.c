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

	a = c % 10;
	if (a < 0)
	{
		_putchar(-a + 48);
		return (-a);
	}
	else
	{
		_putchar(a + 48);
		return (a);
	}
}
