#include "main.h"

/**
 * puts2 - prints every other characters
 * @str: pointer arguments
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
