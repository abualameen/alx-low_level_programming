#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- the prog mult two num by comman line argu
 * @argc: argu count
 * @argv: argu vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int t;

	if (argc == 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else if (argc > 1)
	{
		t = atoi(argv[argc - 2]) * atoi(argv[argc - 1]);
		printf("%d\n", t);
	}
	return (0);
}
