#include "main.h"

/**
 * _isalpha - Entry point
 * @c: integer type
 * Return: 1 for lower and 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c > 97 && c < 123) || (c > 64 && c < 91))
		return (1);
	else
		return (0);
}
