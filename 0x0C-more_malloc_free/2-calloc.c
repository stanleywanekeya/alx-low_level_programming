#include "main.h"
#include <stdlib.h>

/**
 * _calloc - acquires n bytes memory block
 * @nmemb: integer argument
 * @size: integer argument
 * Return: pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, n, *res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(sizeof(size) * nmemb);
	if (!res)
		return (NULL);
	n = size * nmemb;
	for (i = 0; i < n; ++i)
	{
		res[i] = 0;
	}
	return (res);
}
