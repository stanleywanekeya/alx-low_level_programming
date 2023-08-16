#include "function_pointers.h"

/**
 * int_index - returns pointer to it
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index if int is found -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (size <= 0 || array == NULL || CMP == NULL)
		return (-1);
	for (j = 0; i < size; ++j)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
