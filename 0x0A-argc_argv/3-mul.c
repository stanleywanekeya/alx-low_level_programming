#include <stdio.h>
#include <stdlib.h>

/**
 * main - starting point of program
 * @argc: comand line count
 * @argv: comand line vector
 * Return: value 0 for success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
