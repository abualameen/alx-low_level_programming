#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: function argument for memo
 *@src: functopm argument for memo
 *@n: function argu byte num
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
}

