#include "main.h"

/**
 * _strncpy - copies n number of chars
 * @dest: pointer argument
 * @src: pointer argument of src
 * @n: integer argument
 * Return: value destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
