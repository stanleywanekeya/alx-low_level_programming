#include "main.h"

/**
 * _strlen - calculates length of string
 * @s: pointer argument
 * Return: the length of string
 */
int _strlen(char *s)
{
	int longi = 0;
	while (*s != '\0') 
	{
		longi++;
		s++;
	} 
	return (longi);
}
