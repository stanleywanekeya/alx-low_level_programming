#include "main.h"

/**
 * _strncpy - copies n number of chars 
 * @dest: pointer argument
 * @src: pointer argument of src
 * Return: value destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
