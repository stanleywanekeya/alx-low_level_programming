#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats n number of strings
 * @s1: pointer argument
 * @s2: pointer argument
 * @n: integer argument
 * Return: string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len, len1, i, j;

	len = len1 = i = j = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len] != '\0')
	{
		++len;
	}
	while (s2[len1] != '\0')
	{
		++len1;
	}
	if (n < len1)
		res = malloc(sizeof(char) + (len + n + 1));
	else
		res = malloc(sizeof(char) + (len + len1 + 1));

	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s1[i];
		++i;
	}
	while (n < len1 && i < (len + n))
	{
		res[i++] = s2[j++];
	}
	while (n > len1 && i < (len + len1))
	{
		res[i++] = s2[j++];
	}

	res[i] = '\0';
	return (res);
}
