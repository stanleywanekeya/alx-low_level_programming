#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 * Return: value 0 (Success)
 */
int main(void)
{
	long int i, n, max;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}
	}
	if (n > 2)
		max = n;
	printf("%ld\n", max);
	return (0);
}
