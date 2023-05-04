#include "main.h"
/**
 * set_bit - bit to 1 at an indx
 * @n: num
 * @index: index given
 * Return: 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
