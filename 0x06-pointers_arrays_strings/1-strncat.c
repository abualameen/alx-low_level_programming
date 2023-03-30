#include "main.h"
/**
 * _strncat - the function concatenante n len of strings
 * @dest: the destination location string
 * @src: the source string
 * @n: function argument
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int g;
	int count = 0;
	int f;

	for (g = 0; dest[g] != '\0'; g++)
	{
		count++;
	}
	for (f = 0; f < n; f++)
	{
		dest[count + f] = src[f];
	}
	dest[count + n] = '\0';
	return (dest);
}
