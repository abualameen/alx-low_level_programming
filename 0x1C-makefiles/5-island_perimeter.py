#!/usr/bin/python3

def island_perimeter(grid):
    """
    this function calculates the perimeter of the 
    island described in the given grid

    Args:
        grid (List[list[int]]): is a list of list as the island
    Returns:
        int: The perimeter of the island
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
    return perimeter
    
