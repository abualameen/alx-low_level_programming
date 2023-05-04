#include "main.h"
/**
 * get_endianness - checks for endianness
 * Return: 0
 */
int get_endianness(void)
{
	int b = 1;
	char *c = (char *) &b;

	return (*c == 1);
}
