#include <stdio.h>

char board[3][3]; // 3x3 Tic-Tac-Toe board
char currentPlayer = 'X'; // Start with player 'X'

// Function prototypes
void initializeBoard();
void printBoard();
int checkWin();
int isBoardFull();
void switchPlayer();

int main() {
    int row, col;
    int gameStatus = 0; // 0 = game is ongoing, 1 = someone won, -1 = draw

    initializeBoard();
    
    // Main game loop
    while (gameStatus == 0) {
        printBoard();
        printf("Player %c, enter row and column (0-2): ", currentPlayer);
        scanf("%d %d", &row, &col);
        
        // Check if the position is valid
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = currentPlayer; // Make the move
            gameStatus = checkWin(); // Check if the current player wins
            if (gameStatus == 0) {
                if (isBoardFull()) {
                    gameStatus = -1; // It's a draw
                } else {
                    switchPlayer(); // Switch players if no one wins yet
                }
            }
        } else {
            printf("Invalid move! Try again.\n");
        }
    }

    // End of game
    printBoard();
    if (gameStatus == 1) {
        printf("Player %c wins!\n", currentPlayer);
    } else {
        printf("It's a draw!\n");
    }

    return 0;
}

// Function to initialize the board with empty spaces
void initializeBoard() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// Function to print the current state of the board
void printBoard() {
    printf("\nTic-Tac-Toe Board:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

// Function to check if there is a winner
int checkWin() {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
            return 1;
        }
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
            return 1;
        }
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
        return 1;
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
        return 1;
    }

    return 0; // No winner yet
}

// Function to check if the board is full
int isBoardFull() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') {
                return 0; // Found an empty space, board is not full
            }
        }
    }
    return 1; // Board is full
}

// Function to switch between players 'X' and 'O'
void switchPlayer() {
    currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
}



//output
// Tic-Tac-Toe Board:
//    |   |   
// ---|---|---
//    |   |   
// ---|---|---
//    |   |   

// Player X, enter row and column (0-2): 1 1

// Tic-Tac-Toe Board:
//    |   |   
// ---|---|---
//    | X |   
// ---|---|---
//    |   |   

// Player O, enter row and column (0-2): 0 0

// Tic-Tac-Toe Board:
//  O |   |   
// ---|---|---
//    | X |   
// ---|---|---
//    |   |   

// Player X, enter row and column (0-2): 1 0

// Tic-Tac-Toe Board:
//  O |   |   
// ---|---|---
//  X | X |   
// ---|---|---
//    |   |   

// Player O, enter row and column (0-2): 0 2

// Tic-Tac-Toe Board:
//  O |   | O 
// ---|---|---
//  X | X |   
// ---|---|---
//    |   |   

// Player X, enter row and column (0-2): 2 2

// Tic-Tac-Toe Board:
//  O |   | O 
// ---|---|---
//  X | X |   
// ---|---|---
//    |   | X 

// Player X wins!
