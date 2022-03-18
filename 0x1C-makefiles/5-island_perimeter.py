#!/usr/bin/python3
"""Get island perimeter."""


def check_grid(grid, i, j):
    """Check neighbours."""
    neigh = 0

    if grid[i][j - 1] == 1:
        neigh += 1

    if grid[i][j + 1] == 1:
        neigh += 1

    if grid[i - 1][j] == 1:
        neigh += 1

    if grid[i + 1][j] == 1:
        neigh += 1

    return neigh


def island_perimeter(grid):
    """Get island perimmeter."""
    peri = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if (grid[i][j] == 1):
                # print(check_grid(grid, i, j))
                peri += 4 - check_grid(grid, i, j)
    return peri
