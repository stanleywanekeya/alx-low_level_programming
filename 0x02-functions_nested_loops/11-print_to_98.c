#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number n to 98
 *@n: inputs integer n
 */

void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98 && i >= 0; i++)
	{
		printf("%d", i);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
}
