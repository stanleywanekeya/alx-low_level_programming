#include "main.h"

/**
 * _strlen_recursion - prints the length of string
 * @s: pointer argument
 * Return: sum length of string
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s)
	{
		++sum;
		sum += _strlen_recursion(s + 1);
	}
	return (sum);
}
