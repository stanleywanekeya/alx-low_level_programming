#include <stdio..h>

/**
 * main - Entry point
 * Return: value 0 (Success)
 */
int main(void)
{
	int i;
	int fib = 0, fib1 = 1, sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = fib + fib1;
		printf("%d", sum);
		fib = fib1;
		fib1 = sum;
		if (sum == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
