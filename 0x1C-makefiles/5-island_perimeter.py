#!/usr/bin/python3
"""island_perimeter module"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid."""
    prmtr = 0

    if not grid or not grid[0]:
        return prmtr

    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                prmtr += 4
                if i > 0 and grid[i - 1][j] == 1:
                    prmtr -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    prmtr -= 2
    return prmtr
