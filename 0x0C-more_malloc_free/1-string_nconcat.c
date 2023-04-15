#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - the function concatenates two str
 * @s1: function argu
 * @s2: funtion argu
 * @n: funttion argu
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s_c1 = 0, s_c2 = 0;
	unsigned int f, t, r, w;
	char *wod;

	if (s1 == NULL && s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	for (f = 0; s1[f] != '\0'; f++)
	{
		s_c1++;
	}
	for (t = 0; s2[t] != '\0'; t++)
	{
		s_c2++;
	}
	if (n > s_c2)
	{
		n = s_c2;
	}
	wod = malloc(s_c1 + s_c2 + 1 * sizeof(char));
	if (wod == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < s_c1; r++)
	{
		wod[r] = s1[r];
	}
	for (w = 0; w < n; w++)
	{
		wod[s_c1 + w] = s2[w];
	}
	wod[s_c1 + s_c2 + 1] = '\0';
	return (wod);
}
