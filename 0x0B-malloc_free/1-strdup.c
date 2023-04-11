#include "main.h"
#include <stdlib.h>
/**
 * _strdup - the function returns a pter to a newly alocated space
 * @str: argument
 * Return: pointer to the duplicate
 */

char *_strdup(char *str)
{
	int i, k;
	int str_len = 0;
	char *dup;

	for (i = 0; str[i] != '\0'; i++)
	{
		str_len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(sizeof(char) * str_len + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < str_len; k++)
	{
		dup[k] = str[k];
	}
	dup[str_len] = '\0';
	return (dup);
}
