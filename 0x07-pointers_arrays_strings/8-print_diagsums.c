#include "main.h"

/**
 * print_diagsums - print sums of diagonals
 * @a: pointer argument
 * @size: integer argument
 */
void print_diagsums(int *a, int size)
{
	int i, j = 0, right = 0, left = 0, sum = 0;

	for (i = 0; i < size; ++i)
	{
		right += a[i][j];
		j += 1;
	}
	for (j; j >= 0; --j)
	{
		left += a[i][j];
		i -= 1;
	}
	sum = right + left;
	printf("%d", sum);
}
