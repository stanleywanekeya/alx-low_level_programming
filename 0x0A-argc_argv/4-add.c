#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program start point
 * @argc: command line count
 * @argv: command line vector
 * Return: value 0 for success
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; ++i)
	{
		if (!(*argv[i] > 47 && *argv[i] < 58))
		{
			printf("ERROR\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
