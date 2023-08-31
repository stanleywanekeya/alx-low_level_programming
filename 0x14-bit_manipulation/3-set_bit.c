#include "main.h"

/**
 * set_bit - function to set bit to 1
 * @n: interger pointer
 * @index: index to set bit
 * Return: if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
