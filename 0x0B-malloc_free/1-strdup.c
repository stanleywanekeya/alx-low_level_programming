#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string in new memory
 * @str: pointer argument
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;

	if (!str)
		return (0);
	s = (char *)malloc(sizeof(str));
	if (!s)
		return (0);
	for (i = 0; str[i] != 0; ++i)
		s[i] = str[i];
	s[i + 1] = '\0';
	return (s);
}
