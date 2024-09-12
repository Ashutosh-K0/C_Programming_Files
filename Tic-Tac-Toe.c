#include <stdio.h>

#define SIZE 3

// Function to print the current state of the board
void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", board[i][j]);
            if (j < SIZE - 1) printf("| ");
        }
        printf("\n");
        if (i < SIZE - 1) {
            for (int k = 0; k < SIZE - 1; k++) printf("--+ ");
            printf("--\n");
        }
    }
    printf("\n");
}

// Function to check if the current player has won
int checkWin(char board[SIZE][SIZE], char player) {
    // Check rows and columns for a win
    for (int i = 0; i < SIZE; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return 1; // Player has won
        }
    }
    // Check diagonals for a win
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return 1; // Player has won
    }
    return 0; // No win
}

// Function to check if the board is full (i.e., no empty cells)
int isFull(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') return 0; // Board is not full
        }
    }
    return 1; // Board is full
}

int main() {
    // Initialize an empty board
    char board[SIZE][SIZE] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    int row, col;
    char currentPlayer = 'X'; // Starting player
    int moves = 0; // Counter for the number of moves made

    printf("Tic-Tac-Toe Game!\n");
    printBoard(board);

    while (1) {
        // Prompt the current player for their move
        printf("Player %c, enter row and column (0, 1, 2): ", currentPlayer);
        scanf("%d %d", &row, &col);

        // Validate the move
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue; // Ask for the move again
        }

        // Update the board with the current player's move
        board[row][col] = currentPlayer;
        printBoard(board);
        moves++;

        // Check if the current player has won
        if (checkWin(board, currentPlayer)) {
            printf("Player %c wins!\n", currentPlayer);
            break; // End the game
        }

        // Check if the board is full (draw)
        if (isFull(board)) {
            printf("It's a draw!\n");
            break; // End the game
        }

        // Switch players
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}
