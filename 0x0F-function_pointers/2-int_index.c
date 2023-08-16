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
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
