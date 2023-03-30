#include "main.h"
/**
 * string_toupper - the functon
 * @n: argument
 * Return: n
 */

char *string_toupper(char *n)
{
	int k;
	int count = 0;
	int j;

	j = 0;
	while (n[j] != '\0')
	{
		if (n[j] >= 'a' &&  n[j] <= 'z')
		{
			n[j] = n[j] - 32;
		}
		j++;
	}
	return (n);
}
