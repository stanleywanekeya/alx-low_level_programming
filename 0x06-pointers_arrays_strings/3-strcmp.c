#include "main.h"

/**
 * _strcmp - Campare string 1 to string 2
 * @s1: pointer argument
 * @s2: pointer argument 2
 * Return: value 0 if equal else other
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (0);
}
