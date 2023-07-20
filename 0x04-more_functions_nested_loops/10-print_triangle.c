#include "main.h"

/**
 * print_triangle - Print pyramid
 * @size: Integer argument
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			for (j = size; j > i; --j)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; ++k)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
