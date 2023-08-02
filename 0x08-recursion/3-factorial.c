#include "main.h"

/**
 * factorial - finds factorials
 * @n: integer argument
 * Return: factorial of int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
