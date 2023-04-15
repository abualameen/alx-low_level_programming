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
	unsigned int s_c1 = 0, s_c2 = 0, w = 0, r = 0;
	unsigned int f, t;
	char *wod;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (f = 0; s1[f] != '\0'; f++)
		s_c1++;
	for (t = 0; s2[t] != '\0'; t++)
		s_c2++;
	if (n < s_c2)
	{
		wod = malloc(s_c1 + n + 1 * sizeof(char));
	}
	else if (n > s_c2)
	{
		wod = malloc(s_c1 + s_c2 + 1 * sizeof(char));
	}
	if (wod == NULL)
	{
		return (NULL);
	}
	while (w < s_c1)
	{
		wod[w] = s1[w];
		w++;
	}
	while (n < s_c2 && w < (s_c1 + n))
	{
		wod[w++] = s2[r++];
	}
	while (n >= s_c2 && w < (s_c1 + s_c2))
	{
		wod[w++] = s2[r++];
	}
	wod[w] = '\0';
	return (wod);
}
