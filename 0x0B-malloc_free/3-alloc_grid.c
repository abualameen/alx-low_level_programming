#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - the function pointer to two d array
 * @width: argument
 * @height: argument
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr, y, f;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < height; y++)
	{
		arr[y] = malloc(sizeof(int) * width);
		if (arr[y] == NULL)
		{
			for (f = 0; f < y; f++)
			{
				free(arr[f]);
			}
			free(arr);
			return (NULL);
		}
		for (f = 0; f < width; f++)
		{
			arr[y][f] = 0;
		}
	}
	return (arr);
}
