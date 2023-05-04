#include "main.h"
/**
 * flip_bits - flips bits
 * @n: num
 * @m: num
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ver = n ^ m;
	unsigned int counter = 0;

	while (ver)
	{
		counter += ver & 1;
		ver >>= 1;
	}
	return (counter);
}
