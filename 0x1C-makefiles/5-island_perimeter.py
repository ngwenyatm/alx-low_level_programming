#!/usr/bin/python3
"""
Calculates the perimeter of an island from grid.
"""

def island_perimeter(grid):
    """
    Args:
        grid: A list of lists of ints,
        where 0 = water and 1 = land.

    Return:
        Perimeter of the island.
    """

    isl_perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                isl_perimeter = isl_perimeter+4
                if j > 0 and grid[i][j-1] == 1:
                    isl_perimeter = isl_perimeter-2
                if i > 0 and grid[i-1][j] == 1:
                    isl_perimeter = isl_perimeter+2
    return isl_perimeter
