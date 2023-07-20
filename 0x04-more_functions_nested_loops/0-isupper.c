#include "main.h"

/**
 * _isupper - check if char is upper
 * @c: integer argument
 * Return: value 1 if upper or 0 if otherwise
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
