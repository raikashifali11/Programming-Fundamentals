#include <stdio.h>
#include <stdbool.h>

#define SIZE 3

void initializeBoard(char board[SIZE][SIZE]);
void printBoard(char board[SIZE][SIZE]);
bool makeMove(char board[SIZE][SIZE], int row, int col, char player);
bool checkWinner(char board[SIZE][SIZE], char player);
bool checkDraw(char board[SIZE][SIZE]);

int main() {
    char board[SIZE][SIZE];
    char currentPlayer = 'X';
    int row, col;
    bool gameWon = false, gameDraw = false;

    initializeBoard(board);

    while (!gameWon && !gameDraw) {
        printBoard(board);
        printf("Player %c, enter your move (row and column): ", currentPlayer);
        scanf("%d%d", &row, &col);

        // Adjust for 0-based indexing and validate input
        row -= 1;
        col -= 1;

        if (row >= 0 && row < SIZE && col >= 0 && col < SIZE && board[row][col] == ' ') {
            if (makeMove(board, row, col, currentPlayer)) {
                gameWon = checkWinner(board, currentPlayer);
                gameDraw = checkDraw(board);

                if (gameWon) {
                    printBoard(board);
                    printf("Player %c wins!\n", currentPlayer);
                } else if (gameDraw) {
                    printBoard(board);
                    printf("The game is a draw!\n");
                } else {
                    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
                }
            }
        } else {
            printf("Invalid move. Please try again.\n");
        }
    }

    return 0;
}

void initializeBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard(char board[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}

bool makeMove(char board[SIZE][SIZE], int row, int col, char player) {
    if (board[row][col] == ' ') {
        board[row][col] = player;
        return true;
    }
    return false;
}

bool checkWinner(char board[SIZE][SIZE], char player) {
    // Check rows and columns
    for (int i = 0; i < SIZE; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
        return true;
    }

    return false;
}

bool checkDraw(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}
