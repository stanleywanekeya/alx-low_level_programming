#include "main.h"

/**
 * _memcpy - copies memory from source to destination
 * @dest: pointer argument
 * @src: pointer argument
 * @n: integer argument
 *Return: value s as pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}
