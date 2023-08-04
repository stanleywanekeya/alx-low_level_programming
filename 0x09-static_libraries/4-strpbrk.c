#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: char pointer
 * @accept: char pointer
 * Return: value pointer to string
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
