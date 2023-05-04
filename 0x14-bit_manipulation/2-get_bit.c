#include "main.h"
/**
 * get_bit - return bit value for a given indx
 * @n:  long int num
 * @index: idx
 * Return: 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
