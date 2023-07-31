#include "main.h"

/**
 * _strspn - function that counts prefix of substrin
 * @s: pointer argument
 * @accept: pointer argument
 * Return: value of substring
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned count = 0;
	
	for (i = 0; s[i] != ',' && s[i] != ' '; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
				++count;
		}
	}
	return count;
}

