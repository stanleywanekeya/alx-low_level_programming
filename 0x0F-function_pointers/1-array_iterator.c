#include "function_pointers.h"

/**
 * array_iterator - iterates through array
 * @array: array of elements
 * @size: number of elements in array
 * @action: array pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
