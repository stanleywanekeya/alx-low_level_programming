#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: pointer argument
 * Return: the length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	return (i);
}
