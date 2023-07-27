#include "main.h"

/**
 * _strncat - copies n numbers from src to destination
 * @dest: ppointer argument to destination
 * @src: pointer argument to source
 * @n: number argument to ber copied from source
 * Return: value dest as pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; ++i)
		++len;
	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
