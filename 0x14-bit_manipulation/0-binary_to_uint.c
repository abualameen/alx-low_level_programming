#include "main.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: point to binary num
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		output = output << 1;
		if (*b == '1')
		{
			output = output | 1;
		}
	}
	return (output);
}
