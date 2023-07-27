#include "main.h"

/**
 * _strcat - coppy from source to destination
 * @dest: pointer argument
 * @src: pointer argument
 * Return: value pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	for (i = 0; dest[i] != '\0'; ++i)
		++len;
	for (i = 0; src[i] != '\0'; ++i)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
