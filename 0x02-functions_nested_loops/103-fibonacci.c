#include <stdio.h>

/**
 * main - Entry point
 * Return: value 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long int j, k, n, sum = 0;

	j = 1;
	k = 2;
	for (i = 1; i <= 33; i++)
	{
		if (j < 4000000 && (j % 2) == 0)
			sum += j;
		n = j + k;
		j = k;
		k = n;
	}
	printf("%lu\n", sum);
	return (0);
}
