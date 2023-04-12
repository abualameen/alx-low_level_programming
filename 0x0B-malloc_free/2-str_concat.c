#include "main.h"
#include <stdlib.h>
/**
 * str_concat - the function concatenete
 * @s1: arugument
 * @s2: argument
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	int k, l, r, t;
	int c_s1 = 0, c_s2 = 0;
	char *d_pointer;

	if (!s1 && !s2)
	{
		s1 = "";
		s2 = "";
	}
	else if (!s1 && s2)
	{
		s1 = "";
	}
	else if (!s2 && s1)
	{
		s2 = "";
	}
	for (k = 0; s1[k] != '\0'; k++)
	{
		c_s1++;
	}
	for (l = 0; s2[l] != '\0'; l++)
	{
		c_s2++;
	}
	d_pointer = malloc((c_s1 + c_s2 + 1) * sizeof(char));
	if (!d_pointer)
	{
		return (NULL);
	}
	for (r = 0; r < c_s1; r++)
	{
		d_pointer[r] = s1[r];
	}
	for (t = 0; t < c_s2; t++)
	{
		d_pointer[c_s1 + t] = s2[t];
	}
	d_pointer[c_s1 + c_s2] = '\0';
	return (d_pointer);
}
