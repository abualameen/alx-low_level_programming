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
	int p = 0;
	int k = n;

	for (; p < k; p++)
	{
		dest[p] = src[p];
	}
	return (dest);
}
