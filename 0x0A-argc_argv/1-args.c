#include "main.h"
#include <stdio.h>

/**
 * main - the function prints the num of arguments on commandline
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
