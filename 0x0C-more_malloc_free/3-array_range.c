#include "main.h"
#include <stdlib.h>
/**
 * array_range - the function creates an arry
 * @min: function argu
 * @max: function argu
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int len_int, g;
	int *matrix;

	len_int = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	matrix = malloc(sizeof(int) * len_int);
	if (matrix == NULL)
	{
		return (NULL);
	}
	for (g = 0; g < len_int; g++)
	{
		matrix[g] = min + g;
	}
	return (matrix);
}
