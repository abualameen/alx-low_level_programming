#include "main.h"
#include <stdio.h>

/**
 * main - the prog print all arg recieved
 * @argc: argu count
 * @argv: argu vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int f;

	for (f = 0; f < argc; f++)
	{
		printf("%s\n", argv[f]);
	}
	return (0);
}
