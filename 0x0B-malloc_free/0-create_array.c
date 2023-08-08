#include "main.h"
#include <stdlib.h>

/**
 * create_array - uses malloc to create array
 * @size: integer argument
 * @c: char argument
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (0);
	s = (char *)malloc(sizeof(char) * size);
	if (!s)
		return (0);
	for (i = 0; i < size; ++i)
		s[i] = c;
	return (s);
}
