#include "main.h"

/**
 * _strchr - find character in string
 * @s: pointer character
 * @c: char argument
 * Return: value s if found and null if not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
