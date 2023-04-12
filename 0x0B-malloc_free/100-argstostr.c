#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments of a prog
 * @ac: argument
 * @av: argument
 * Return: pointer to a new str
 */

char *argstostr(int ac, char **av)
{
	int str_len = 0, f, t, r, m = 0, n = 0, lca = 0;
	char *func_a;
	char *str_pt;


	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (f = 0; f < ac; f++)
	{
		func_a = av[f];
		t = 0;
		for (t = 0; func_a[t] != '\0'; t++)
		{
			str_len++;
			r++;
		}
		str_len++;
	}
	str_pt = malloc((str_len + 1) * sizeof(char));
	if (str_pt == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < ac; m++)
	{
		func_a = av[m];
		n = 0;
		while (func_a[n] != '\0')
		{
			str_pt[lca++] = func_a[n++];
		}
		str_pt[lca++] = '\n';
	}
	str_pt[lca] = '\0';
	return (str_pt);
}
