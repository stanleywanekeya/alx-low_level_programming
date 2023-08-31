#include "main.h"

/**
 * clear_bit - sets bits to 0 in function
 * @n: integer pointer
 * @index: index of bits cleared
 * Return: value of successful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

