#include "main.h"

/**
 * _strchr - Finds char in string
 * @s: pointer argument
 * @c: character argument
 * Return: value when char is find
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; ++i)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
