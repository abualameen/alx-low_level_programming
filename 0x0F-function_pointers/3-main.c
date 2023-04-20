#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the entry point of function
 * @argc: argument count
 * @argv: vector count
 * Return: int
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;
	int (*ptr_func)(int, int);
	(void)argc;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	ptr_func = get_op_func(operator);
	if (ptr_func == NULL)
	{
		printf("Error\n");
		return (99);
	}
	if ((*operator == '/' || *operator == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}
	calc = ptr_func(num1, num2);
	printf("%d\n", calc);
	return (0);
}
