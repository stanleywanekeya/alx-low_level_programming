#include "main.h"

/**
 * print_rev - print in reverse
 * @s: pointer argument
 */
void rev_string(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; ++i)
		++len;
	/*for (i = len; i >= 0; --i)
		_putchar(s[i]);*/
	_putchar('\n');
}
