#include "main.h"

/**
 * more_numbers - Print from 0 - 9 ten times
 */
void more_numbers(void)
{
	int i, j, l, k = 1;

	l = 0;
	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 15; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else
			{
				_putchar(k + '0');
				_putchar(l + '0');
				++l;
			}
		}
		l = 0;
		_putchar('\n');
	}
}
