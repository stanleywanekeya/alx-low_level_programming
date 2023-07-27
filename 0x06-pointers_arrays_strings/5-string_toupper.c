#include "main.h"

/**
 * string_toupper - converts to uppercase
 * @s: pointer argument to string
 * Return: value string pointer
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if ((s[i] >= 97) && (s[i] <= 122))
			s[i] -= 32;
	}
	return (s);
}
