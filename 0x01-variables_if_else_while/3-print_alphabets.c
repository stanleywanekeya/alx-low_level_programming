#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: value 0 (Success)
 */
int main(void)
{
	char c = 'a';

	do {
		putchar(c);
		c += 1;
	} while (c <= 'z');
	c = 'A';

	do {
		putchar(c);
		c += 1;
	} while (c <= 'Z');
	printf("\n");
}
