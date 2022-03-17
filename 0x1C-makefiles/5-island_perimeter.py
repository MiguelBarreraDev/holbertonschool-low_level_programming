#!/usr/bin/python3
"""
Use this module for get the island perimeter

Functions
---------
     insland_perimeter(grid)
"""


def island_perimeter(grid):
    """
    Functions Definition

    Parameters
    ----------
        grid: list
            listi of list of integers
    Return
    ------
        perimeter: int
    """
    perimeter = 0
    top = 0
    bottom = 0
    left = 0
    right = 0

    for i, arr in enumerate(grid):
        for j, elm in enumerate(arr):
            if elm == 1 and\
                (grid[i-1][j] == 1 or grid[i][j+1] == 1 or
                    grid[i+1][j] == 1 or grid[i][j-1] == 1) and\
                    i != 0 and i != len(grid) - 1 and j != 0 and\
                    j != len(arr) - 1:
                perimeter += 4
                if grid[i-1][j] == 1:
                    top = 1
                if grid[i][j+1] == 1:
                    right = 1
                if grid[i+1][j] == 1:
                    bottom = 1
                if grid[i][j-1] == 1:
                    left = 1
                perimeter -= (top + right + bottom + left)
                top = 0
                bottom = 0
                left = 0
                right = 0
    return perimeter
