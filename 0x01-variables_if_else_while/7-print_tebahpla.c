#include <stdio.h>

/**
 * main - Entry point
 * Return: value 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		--c;
	}
	printf("\n");
	return (0);
}
