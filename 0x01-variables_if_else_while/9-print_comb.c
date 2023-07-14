#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: value 0 (Success)
 */

int main(void)
{
	int i = 48;

	do {
		putchar(i);
		if (i < 57)
			putchar(',');
		++i;
	} while (i < 58);
	putchar('\n');
	return (0);
}
