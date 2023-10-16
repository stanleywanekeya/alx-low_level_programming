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
	int i;
	int j;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	} 
	j = 0; 
	while (j < n && src[j] != '\0') 
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
