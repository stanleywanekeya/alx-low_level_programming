#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: value 0 (Success)
 */
int main(void)
{
	char c = 'a';

	do {
		if (!(c == 'e' || c == 'q'))
			putchar(c);
		c++;
	} while (c <= 'z');
	printf("\n");
	return (0);
}
