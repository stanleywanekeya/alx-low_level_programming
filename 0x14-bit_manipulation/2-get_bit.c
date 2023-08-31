#include "main.h"

/**
 * get_bit - find value of bit
 * @n: integer argument
 * @index: index to find bit
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
