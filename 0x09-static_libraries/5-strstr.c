#include "main.h"

/**
 * _strstr - Finds substring in a string
 * @haystack: pointer argument
 * @needle: pointer argument
 * Return: value of point of string
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
