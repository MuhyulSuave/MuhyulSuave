#include<stdio.h>

// Function prototypes
void displayBoard();
int verifySelection(int, int);
void checkForWin();

// Global variables
char board[9];
char cWhoWon = ' ';
int iCurrentPlayer = 0;

int main()
{
    // Variable for user input
    int iSquareNum = 0;

    // Initializing the game board
    for (int x = 0; x < 9; x++)
        board[x] = ' ';

    // Displaying the initial game board
    displayBoard();

    // Main game loop
    while (cWhoWon == ' ')
    {
        printf("\n%c\n", cWhoWon);

        // Determining the current player
        if (iCurrentPlayer == 1 || iCurrentPlayer == 0)
        {
            printf("\n Player X\n");
            printf("\n Enter a square number (1-9): ");
            scanf("%d", &iSquareNum);

            // Verifying and updating the selection
            if (verifySelection(iSquareNum, iCurrentPlayer) == 1)
                iCurrentPlayer = 1;
            else
                iCurrentPlayer = 2;
        }
        else
        {
            printf("\n Player O\n");
            printf("\n Enter a square number (1-9): ");
            scanf("%d", &iSquareNum);

            // Verifying and updating the selection
            if (verifySelection(iSquareNum, iCurrentPlayer) == 1)
                iCurrentPlayer = 2;
            else
                iCurrentPlayer = 1;
        }

        // Displaying the updated game board
        displayBoard();

        // Checking for a win or a tie
        checkForWin();
    }

    return 0; // Indicating successful program execution
}

// Function to display the current game board
void displayBoard()
{
    system("clear");
    printf("\n\t|\t|\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[0], board[1], board[2]);
    printf("_______|_______|_______\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[3], board[4], board[5]);
    printf("_______|_______|_______\n");
    printf("\t|\t|\n");
    printf("%c\t|%c\t|%c\n", board[6], board[7], board[8]);
    printf("\t|\t|\n");
}

// Function to verify and update the player's selection on the board
int verifySelection(int iSquareNum, int iCurrentPlayer)
{
    if (board[iSquareNum - 1] == ' ' && (iCurrentPlayer == 1 || iCurrentPlayer == 0))
    {
        board[iSquareNum - 1] = 'X';
        return 0;
    }
    else if (board[iSquareNum - 1] == ' ' && (iCurrentPlayer == 2))
    {
        board[iSquareNum - 1] = 'O';
        return 0;
    }
    else
        return 1; // Invalid selection, prompting the player to choose again
}

// Function to check for a win or a tie
void checkForWin()
{
    int catTotal = 0;

    // Check for win conditions (X)
    if ((board[0] == 'X' && board[1] == 'X' && board[2] == 'X') ||
        (board[3] == 'X' && board[4] == 'X' && board[5] == 'X') ||
        (board[6] == 'X' && board[7] == 'X' && board[8] == 'X') ||
        (board[0] == 'X' && board[3] == 'X' && board[6] == 'X') ||
        (board[1] == 'X' && board[4] == 'X' && board[7] == 'X') ||
        (board[2] == 'X' && board[5] == 'X' && board[8] == 'X') ||
        (board[0] == 'X' && board[4] == 'X' && board[8] == 'X') ||
        (board[2] == 'X' && board[4] == 'X' && board[6] == 'X'))
    {
        cWhoWon = 'X';
        printf("\n X Wins\n");
        return;
    }

    // Check for win conditions (O)
    if ((board[0] == 'O' && board[1] == 'O' && board[2] == 'O') ||
        (board[3] == 'O' && board[4] == 'O' && board[5] == 'O') ||
        (board[6] == 'O' && board[7] == 'O' && board[8] == 'O') ||
        (board[0] == 'O' && board[3] == 'O' && board[6] == 'O') ||
        (board[1] == 'O' && board[4] == 'O' && board[7] == 'O') ||
        (board[2] == 'O' && board[5] == 'O' && board[8] == 'O') ||
        (board[0] == 'O' && board[4] == 'O' && board[8] == 'O') ||
        (board[2] == 'O' && board[4] == 'O' && board[6] == 'O'))
    {
        cWhoWon = 'O';
        printf("\n O Wins\n");
        return;
    }

    // Check for a tie
    for (int x = 0; x < 9; x++)
    {
        if (board[x] != ' ')
            catTotal += 1;
    }

    if (catTotal == 9)
    {
        cWhoWon = 'C';
        printf("\n Cat's Game\n");
        return;
    }
}
