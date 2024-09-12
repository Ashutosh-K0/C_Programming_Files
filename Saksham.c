#include <stdio.h>
#include <stdbool.h>

// Check if it's safe to place a digit in the specified row and column
bool isSafe(int sudoku[9][9], int row, int col, int digit) {
    // Check column
    for (int i = 0; i < 9; i++) {
        if (sudoku[i][col] == digit) {
            return false;
        }
    }

    // Check row
    for (int j = 0; j < 9; j++) {
        if (sudoku[row][j] == digit) {
            return false;
        }
    }

    // Check 3x3 grid
    int sr = (row / 3) * 3;
    int sc = (col / 3) * 3;

    for (int i = sr; i < sr + 3; i++) {
        for (int j = sc; j < sc + 3; j++) {
            if (sudoku[i][j] == digit) {
                return false;
            }
        }
    }

    return true;
}

// Recursive function to solve the Sudoku
bool sudokuSolver(int sudoku[9][9], int row, int col) {
    // Base case: if we've reached the end of the board
    if (row == 9 && col == 0) {
        return true;
    }

    // Determine the next cell to fill
    int nextRow = row, nextCol = col + 1;
    if (col + 1 == 9) {
        nextRow = row + 1;
        nextCol = 0;
    }

    // If the current cell is already filled, move to the next one
    if (sudoku[row][col] != 0) {
        return sudokuSolver(sudoku, nextRow, nextCol);
    }

    // Try placing digits 1-9 in the current cell
    for (int digit = 1; digit <= 9; digit++) {
        if (isSafe(sudoku, row, col, digit)) {
            sudoku[row][col] = digit;

            // If the solution is valid, return true
            if (sudokuSolver(sudoku, nextRow, nextCol)) {
                return true;
            }

            // If not valid, backtrack
            sudoku[row][col] = 0;
        }
    }

    return false;
}

// Function to print the Sudoku board
void printSudoku(int sudoku[9][9]) {
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            printf("%d ", sudoku[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int sudoku[9][9] = {
        {0, 0, 8, 0, 0, 0, 0, 0, 0},
        {4, 9, 0, 1, 5, 7, 0, 0, 2},
        {0, 0, 3, 0, 0, 4, 1, 9, 0},
        {1, 8, 5, 0, 6, 0, 0, 2, 0},
        {0, 0, 0, 0, 2, 0, 0, 6, 0},
        {9, 6, 0, 4, 0, 5, 3, 0, 0},
        {0, 3, 0, 0, 7, 2, 0, 0, 4},
        {0, 4, 9, 0, 3, 0, 0, 5, 7},
        {8, 2, 7, 0, 0, 9, 0, 1, 3}
    };

    if (sudokuSolver(sudoku, 0, 0)) {
        printf("Solution exists\n");
        printSudoku(sudoku);
    } else {
        printf("Solution does not exist\n");
    }

    return 0;
}