#include "main.h"

/**
 * times_table - Entry point
 *
 * */

void times_table(void)
{
	int i, j;
	char k = '0';
	int l = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(k);
			_putchar(k + l);
			_putchar(k + l);
			_putchar(k + l);
			_putchar(k + l);
			_putchar(k + l);
			_putchar(k + l);
			_putchar(k + l);
			_putchar(k + l);
			_putchar(k + l);
		}
		++l;
		_putchar('\n');
	}
}
