#include <stdlib.h>
#include "main.h"


/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int show, c, w;


	show = 0;
	w = 0;


	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			show = 0;
		else if (show == 0)
		{
			show = 1;
			w++;
		}
	}


	return (w);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **res, *tmp;
	int i, k = 0, len = 0, words, c = 0, begin, end;


	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	res = (char **) malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);


	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (begin < end)
					*tmp++ = str[begin++];
				*tmp = '\0';
				res[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			begin = i;
	}

	res[k] = NULL;
	return (res);
}
