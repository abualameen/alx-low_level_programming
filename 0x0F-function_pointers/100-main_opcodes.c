#include <stdio.h>
#include <stdlib.h>
void opcodes_prnt(int number_of_bytes);
/**
 * main - entry point
 * @argc: arg count
 * @argv: vector
 * Return:  opcodes
 */

int main(int argc, char *argv[])
{
	int number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}
	opcodes_prnt(number_of_bytes);
}

/**
 * opcodes_prnt - function that prints opcodes
 * @number_of_bytes: rep num of bytes
 * Return: 0
 */
void opcodes_prnt(int number_of_bytes)
{
	char *begin;
	char *last;
	char *t;

	begin = (char *)opcodes_prnt;
	last = begin + number_of_bytes;
	for (t = begin; t < last; t++)
	{
		printf("%02x", *t & 0xff);
	}
	printf("\n");
}
