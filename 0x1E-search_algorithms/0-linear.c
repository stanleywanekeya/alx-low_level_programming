#include "search_algos.h"

/**
 * linear_search - linear algorithmic function to search for value
 * @array: The array where the value is being searched
 * @size: Size of the array
 * @value: The value to be searched
 * Return: The index and value if found and -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
