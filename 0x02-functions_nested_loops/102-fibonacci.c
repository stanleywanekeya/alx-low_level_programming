#include <stdio.h>

/**
 * main - Entry point
 * Return: value 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long fib = 0, fib1 = 1, sum = 0;

	for (i = 0; i < 50; i++)
	{
		sum = fib + fib1;
		printf("%lu", sum);
		if (i != 49)
		{
			printf(", ");
		}
		fib = fib1;
		fib1 = sum;
	}
	printf("\n");
	return (0);
}
