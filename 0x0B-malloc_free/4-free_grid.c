#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: argument
 * @height: argument
 * Return: pointer
 */
void free_grid(int **grid, int height)
{
	int f;

	if (grid == NULL)
	{
		return;
	}
	else
	{
		for (f = 0; f < height; f++)
		{
			if (grid[f] != NULL)
			{
				free(grid[f]);
			}
		}
		free(grid);
	}
}
