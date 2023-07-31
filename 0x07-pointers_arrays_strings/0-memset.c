#include "main.h"

/**
 * _memset - sets char b to buffer s
 * @s: pointer argument
 * @b: char argument
 * @n: integer argument
 * Return: value pointer s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
