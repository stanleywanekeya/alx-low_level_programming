#include "main.h"

int asqrt(int n, int i);

/**
 * _sqrt_recursion - finds square root
 * @n: integer argument
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (asqrt(n, 0));
}

/**
 * asqrt - calculates square root
 * @n: integer argument
 * @i: integer argument
 * Return: square root
 */
int asqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (asqrt(n, i + 1));
}
