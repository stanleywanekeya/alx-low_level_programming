#include "search_algos.h"

/**
 * binary_search - divides array into halves while searching for value
 * @array: The array to perform binary search
 * @size: size of the array
 * @value: Value to be searched for in the array
 * Return: returns the value if found in the array or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right, mid;

	if (array == NULL)
	{
		return (-1);
	}

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = (left + right) / 2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
