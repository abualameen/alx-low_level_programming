#include "main.h"
/**
 * _memset - this function fills memeory with a contant btye
 * @s: function argument
 * @b: funtion argu
 * @n: funtion argu for number of btye to be changed
 * Return: always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	int g = 0;
	
	for (; n > 0; g++)
	{
		s[g] = b;
		n--;
	}
	return (s);
}
