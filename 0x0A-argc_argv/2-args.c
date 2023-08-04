#include <stdio.h>
#include <stdlib.h>

/**
 * main - Start of program
 * @argc: command line argument
 * @argv: command line vector
 * Return: value 0 for success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 1; i < argc; ++i)
		printf("%s\n", argv[i]);
	return (0);
}
