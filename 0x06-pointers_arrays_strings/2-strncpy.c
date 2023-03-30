#include "main.h"
/**
 * _strncpy - the function copies a string
 * @dest: this is the argument param
 * @src: second argumnet
 * @n: thrid argument number of string
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int r;
	int t;
	int count = 0;

	for (t = 0; src[t] != '\0'; t++)
	{
		count++;
	}
	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
	}
	for ( ; count < n; count++)
	{
		dest[count] = '\0';
	}
	return (dest);
}
