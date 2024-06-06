#!/usr/bin/python3
"""modul perimiter"""


def island_perimeter(grid):
    """Island perimerter"""
    perimeter = 0
    height = len(grid)
    if len(grid[0]):
        width = len(grid[0])
    for i, row in enumerate(grid):
        for j, element in enumerate(row):
            """Count number of perimeter"""
            if element == 1:
                if i - 1 >= 0 and grid[i-1][j] == 0 or i - 1 < 0:
                    perimeter += 1
                if j - 1 >= 0 and grid[i][j-1] == 0 or j - 1 < 0:
                    perimeter += 1
                if i + 1 < height and grid[i+1][j] == 0 or i + 1 >= height:
                    perimeter += 1
                if j + 1 < width and grid[i][j+1] == 0 or j + 1 >= width:
                    perimeter += 1
    return perimeter
