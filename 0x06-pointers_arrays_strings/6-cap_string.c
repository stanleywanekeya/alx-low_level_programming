#include "main.h"

/**
 * cap_string - capitalize first word
 * @S: pointer argument to char
 *Return: value s string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == ' ' || s[i] == ',' ||
		s[i] == ';' || s[i] == '.' || s[i] == '!' ||
		s[i] == '?' || s[i] == '"' || s[i] == '(' ||
		s[i] == ')' || s[i] == '{' || s[i] == '}' ||
		s[i] == '\n' || s[i] == '\t')
		{
			if ((s[i + 1] > 96) && (s[i + 1] < 123))
			{
					s[i + 1] -= 32;
			}
		}
	}
	return (s);
}
