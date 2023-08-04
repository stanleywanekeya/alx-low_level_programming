#include "main.h"

/**
 * _isdigit - checks if is digit
 * @c: integer argument
 * Return: value 1 id is digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
