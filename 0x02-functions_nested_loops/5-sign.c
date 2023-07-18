#include "putchar.h"

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (0);
	}
	else if (n = 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		retrun(-1);
	}
}
