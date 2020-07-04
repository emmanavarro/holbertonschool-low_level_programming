#!/usr/bin/python3
""" Island perimeter module """


def island_perimeter(grid):
    """ Method that returns the perimeter
    of the island described in grid """

    land = 0
    edges = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                island += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edges += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edges += 1
    return (land * 4) - (edges * 2)
