#!/usr/bin/python3

# -*- coding: utf-8 -*-

""" A simple module containing an island estimating function
"""


def island_perimeter(grid):
    ''' Determine the perimeter of a given island

    Args:
        grid: list of list of integers:
             -> 0 represents a water zone
             -> 1 represents a land zone
             -> One cell is a square with side length 1
             -> Grid cells are connect horizontally/verticall (not diagonally)
             -> Grid is rectangular, width and height don't exceed 100
             -> Grid is completely surrounded by water, and there is one island
                or nothing
             -> The island doesn't have "lakes" (water inside that isn't
                connected to water around the island).

    Return:
        Total perimeter of the land i.e 2(L + B)
    '''

    land = False  # there is land ?
    length = 0
    breadth = 0
    p_breadth = 0  # (present breadth)the breadth of the current width(row)
    # Checking Type
    if not type(grid) is list:
        return (0)

    for height in grid:  # a row in the grid
        for width in height:  # a column in the row
            if width == 1:
                land = True  # There is atleast a square land along that width
                p_breadth += 1

        if land is True:  # implies that, the line length ext @ the width
            length += 1

        if p_breadth > breadth:
            breadth = p_breadth

        # Resetting for the new width/ row
        p_breadth = 0
        land = False

    # Estimating the perimeter
    return 2 * (length + breadth)
