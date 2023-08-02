#include "main.h"
int check_palindrome(char *s, int i, int len);
int str_len(char *s);

/**
 * is_palindrome - returns if string is palindrome
 * @s: pointer argument
 * Return: palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_palindrome(s, 0, str_len(s)));
}

/**
 * str_len - find length of string s
 * Return: length of string
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * check_palindrome - check for palindrome
 * @s: pointer argument
 * @i: integer argument
 * @len: integer argument
 * Return: value 1 if palindrome
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palindrome(s, i + 1, len - 1));
}
