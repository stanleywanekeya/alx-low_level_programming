#include <stdio.h>
#include <stdlib.h>

/**
 * main - start of program
 * @argc: command line integer
 * @argv: command line vector
 * Return: 0 for success
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
