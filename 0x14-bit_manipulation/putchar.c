#include "main.h"

/**
 * _putchar - prints character to output
 * @c: character argument
 * Return: character to output
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
