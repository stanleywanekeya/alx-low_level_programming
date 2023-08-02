#include "main.h"
int prime(int i, int j);

/**
 * is_prime_number - check if number is prime number
 * @n: integer argument
 * Return: value 1 if prime and 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - the recursion itself
 * @i: integer argument
 * @j: integer argument
 * Return: value of prime
 */
int prime(int i, int j)
{
	if (j == 1)
		return (1);
	if (i % j == 0 && j > 0)
		return (0);
	return (prime(i, j - 1));
}
