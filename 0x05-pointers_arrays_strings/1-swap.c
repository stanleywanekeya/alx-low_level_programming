#include "main.h"

/**
 *swap_int - function swap
 *@a: pointer argument a
 *@b: pointer argument b
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
