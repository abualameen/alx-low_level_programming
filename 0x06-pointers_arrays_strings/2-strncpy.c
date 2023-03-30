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
	int count = 0;
	int r;
	int t;

	for (r = 0; r < n && src[r] != '\0'; r++)
	{
		dest[r] = src[r];
	}
	for ("" ; r < n; r++)
	{
		dest[r] = '\0';
	}
	return (dest);
}
