#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory space
 * @b: integer argument
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *res;

	res = malloc(sizeof(b));

	if (res == NULL)
		exit(98);
	return (res);
}
