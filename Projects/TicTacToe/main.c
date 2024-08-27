#include "main.h"

#define SIZE 3 //defining length and breadth of the board !
#define INFINITE 1 //define infinite for the loop


//function to print the board !
void printBoard(char board[SIZE][SIZE]) 
{
    printf("|==<@>|Tic-Tac-Toe|<@>==| by [@OfficiallyEra]\n\n");
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            printf(" %c ", board[i][j]);
            if (j < SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}


//function to check if playerX or playerY wins?
int checkWin(char board[SIZE][SIZE]) 
{
    // Check rows and columns
    for (int i = 0; i < SIZE; i++) 
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) //index starts at 0
            return board[i][0];
        
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) //index starts at 0
            return board[0][i];
    }

    // Check diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) //index starts at 0
        return board[0][0];
    
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) //index starts at 0
        return board[0][2];

    return 0;  // No winner yet
}


//taking player input and printing chars i.e Player X will print 'X' and PlayerY will print 'Y'
int checkDraw(char board[SIZE][SIZE]) 
{
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
        }
    }
    return 1;
}

//Rendering The game and play!
void playGame() 
{
    char board[SIZE][SIZE] = { {'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'} };
    char currentPlayer = 'X';
    int move;
    int row, col;
    int win;

    //InfiniteLoop
    while (INFINITE)
    {
        printBoard(board);
        printf("Player %c, enter your move (1-9): ", currentPlayer);
        scanf("%d", &move);

        if (move < 1 || move > 9) 
        {
            printf("Invalid move. Try again.\n");
            continue;
        }

        row = (move - 1) / SIZE;
        col = (move - 1) % SIZE;

        //check if the position is Nil or not
        if (board[row][col] == 'X' || board[row][col] == 'O') 
        {
            printf("Position already taken. Try again.\n");
            continue;
        }


        board[row][col] = currentPlayer;
        win = checkWin(board);

        if (win) 
        {
            printBoard(board);
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        if (checkDraw(board)) 
        {
            printBoard(board);
            printf("It's a draw!\n");
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}


//main Entry!
int main()
{
    playGame();
    
    return 0;
}