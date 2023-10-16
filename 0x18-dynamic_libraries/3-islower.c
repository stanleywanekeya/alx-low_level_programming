#include "main.h"

/**
 * _islower - Entry point
 *@c: integer value
 * Return: value 1 for lower 0 otherwise
 */
int _islower(int c)
{
	if (c > 97 && c < 123)
		return (1);
	else
		return (0);
}
