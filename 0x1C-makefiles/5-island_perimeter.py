#!/usr/bin/python3
"""5-island_perimeter"""
"""Module that calculates the perimeter of an island in a grid."""
def island_perimeter(grid):
    """Calculate the perimeter of an island represented by a grid.

    Args:
        grid (list of list of int): A grid representing the island where:
            - 0 represents water zones.
            - 1 represents land zones.
            i (int): The row index of the cell.
            j (int): The column index of the cell.

    Returns:
        int: The perimeter of the island.

    Notes:
        - Each cell in the grid is a square with a side length of 1.
        - Cells are connected horizontally and vertically, not diagonally.
        - The grid is rectangular and its width and height do not exceed 100.
        - The grid is completely surrounded by water, and there is only one island."""
    perimeter = 0

    # Iterate through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:  # Check if the cell is land
                # Check each side of the current cell for water or boundary
                if i == 0 or grid[i - 1][j] == 0:  # Top side
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:  # Left side
                    perimeter += 1
                if i == len(grid) - 1 or grid[i + 1][j] == 0:  # Bottom side
                    perimeter += 1
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:  # Right side
                    perimeter += 1

    return perimeter
