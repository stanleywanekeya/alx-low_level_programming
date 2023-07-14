#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: value 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i);
		++i;
	}
	printf("\n");
	return (0);
}
