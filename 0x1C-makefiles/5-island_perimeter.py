#!/usr/bin/python3
"""[Checks for the perimeter in a GRID island]
"""


def island_perimeter(grid):
    """[Receives a grid and return the perimeter of land]

    Args:
        grid ([list of list]): map of the island
    """
    num_col = 0
    perimeter = 0
    if not grid:
        return perimeter
    if not grid[0]:
        return perimeter
    for row in grid:
        num_col += 1
        for actual in range(len(row)):
            prev_val = actual - 1
            next_val = actual + 1
            if (row[actual] == 1):
                try:
                    if (row[prev_val] == 0 and prev_val >= 0):
                        perimeter += 1
                    elif (prev_val < 0):
                        perimeter +=1
                except IndexError:
                        perimeter += 1
                try:
                    if (row[next_val] == 0 and prev_val >= 0):
                        perimeter += 1
                    elif (prev_val < 0):
                        perimeter +=1
                except IndexError:
                    perimeter += 1
    for i in range(num_col):
        column = [row[i] for row in grid]
        for actual in range(len(column)):
            prev_val = actual - 1
            next_val = actual + 1
            if (column[actual] == 1):
                try:
                    if (column[prev_val] == 0 and prev_val >= 0):
                        perimeter += 1
                    elif (prev_val < 0):
                        perimeter +=1
                except IndexError:
                        perimeter += 1
                try:
                    if (column[next_val] == 0 and prev_val >= 0):
                        perimeter += 1
                    elif (prev_val < 0):
                        perimeter +=1
                except IndexError:
                    perimeter += 1
    return(perimeter)
