#include "main.h"

/**
 * _puts_recursion - prints characters
 * @s: pointer argument
 * Return: back to main
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
