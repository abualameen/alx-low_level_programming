#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main- the prog adds positive num by comman line argu
 * @argc: argu count
 * @argv: argu vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int t, p = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (t = 1; t < argc; t++)
		{
			if (*argv[argc - t] >= '0' && *argv[argc - t] <= '9')
			{
				p += atoi(argv[argc - t]);
			}
			else
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		printf("%d\n", p);
	}
	return (0);
}
