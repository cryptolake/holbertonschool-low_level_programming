#!/usr/bin/python3
"""Get island perimeter."""


def check_grid(grid, i, j):
    """Check for neighbours or nothing."""
    side = 0

    if j >= 0 and grid[i][j - 1] == 1:
        side += 1

    if len(grid[i]) > j + 1 and grid[i][j + 1] == 1:
        side += 1

    if i >= 0 and grid[i - 1][j] == 1:
        side += 1

    if len(grid) > i + 1 and grid[i + 1][j] == 1:
        side += 1

    return side


def island_perimeter(grid):
    """Get island perimmeter."""
    peri = 0
    for i in range(0, len(grid)):
        for j in range(0, len(grid[i])):
            if (grid[i][j] == 1):
                # print(check_grid(grid, i, j))
                peri += 4 - check_grid(grid, i, j)
    return peri
