#include "main.h"
#include <stdlib.h>
/**
 * create_array - the function creates array of char
 * @size: argument
 * @c: argument
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *ary = malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else if (ary == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		ary[j] = c;
	}
	return (ary);

}
