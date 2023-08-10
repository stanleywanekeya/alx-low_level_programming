#include "main.h"
#include <stdlib.h>

/**
 * array_range - returns an array filled with range
 * @min: integer argument
 * @max: integer argument
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int n, i, *res;

	if (min > max)
		return (NULL);
	n = max - min + 1;
	res = malloc(sizeof(int) * n);
	if (!res)
		return (NULL);
	for (i = 0; i < n; ++i)
	{
		res[i] = min;
		++min;
	}
	return (res);
}
