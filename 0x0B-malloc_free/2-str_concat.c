#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatnates two strings
 * @s1: pointer argument
 * @s2: pointer argument
 * Return: pointer to concatnated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		++i;
	while (s2[j] != '\0')
		++j;
	conc = (char *)malloc(sizeof(char) * (i + j + 1));

	if (conc == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		++i;
	}
	while (s2[j] != '\0')
	{
		conc[i] = s2[j];
		++i, ++j;
	}
	return (conc);
}
