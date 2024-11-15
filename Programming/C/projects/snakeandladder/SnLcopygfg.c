//C Program to implement Snake and Ladder Game
// Author: geeksforgeeks
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Function to roll a six-sided die
int rollDie(){  return rand() % 6 + 1; }

//global variables to store positions of player 1 and player 2
int player1 = 0, player2 = 0;

//Function to print the board
void printBoard()
{
    //logic to print a snake-ladder game board
    //programmer can implement their own logic for the board
    //this is one way to print a snake ladder board
    int board[101];
    for (int i = 1; i <= 100; i++){
        board[i] = i;
    }//end for

    int alt = 0;
    int iterLR = 101;
    int iterRL = 80;
    int val = 100;
    while (val--){
        if(alt == 0){
            iterLR--;
            if(iterLR == player1){
                printf("#p1  ");
            }//end inner if
            else if(iterLR == player1){
                printf("#P2     ");
            }//end inner else if
            else
            {
                printf("%d     ", board[iterLR]);
            }// end inner else
            //////////////////////////////////////////
            if(iterLR % 10 == 1){
                printf("\n\n");
                alt = 1;
                iterLR -= 10;
            }// end inner if
        }//end outer if
        else
        {
            iterRL++;
            if(iterRL == player1)
            {
                printf("#P1     ");
            }//end inner if
            else if(iterRL == player2)
            {
                printf("#P2     ");
            }//end inner else if
            else
            {
                printf("%d      ", board[iterRL]);
            }//end inner else
        }//end outer else
        if(iterRL == 10)
        {
            break;
        }
    }//end while
    printf("\n");
}

//function to move the player
int movePlayer(int currentPlayer, int roll)
{
    int newPosition = currentPlayer + roll;
    //define the positions of snakes and ladders on the board
    int snakesAndLadders[101];

    for(int i = 0; i <= 100; i++)
    {
        snakesAndLadders[i] = 0;
    }//end for

    //here positive weights represent a ladder
    //and negative weights represent a snake.
    snakesAndLadders[6] = 40;
    snakesAndLadders[23] = -10;
    snakesAndLadders[45] = -7;
    snakesAndLadders[61] = -18;
    snakesAndLadders[65] = -8;
    snakesAndLadders[77] = 5;
    snakesAndLadders[98] = -10;

    int newSquare = newPosition + snakesAndLadders[newPosition];

    if(newSquare > 100){
        return currentPlayer; //player cannot move beyond
                              //square 100
    }

    return newSquare;
}

int main()
{
    srand(time(0)); //initialize random seed
    int currentPlayer = 1;
    int won = 0;

    printf("Snake and Ladder Game\n");

    while (!won){
        printf("\nPlayer %d, press Enter to roll the die...",  currentPlayer);
        getchar();//wait for the player to press enter
        int roll = rollDie();
        printf("You rolled a %d. \n", roll);

        if(currentPlayer == 1){
            player1 = movePlayer(player1, roll);
            printf("Player 1 is now at square %d. \n\n", player1);
            printBoard();
            if(player1 == 100){
                printf("Player 1 wins!\n");
                won = 1;
            }//end inner if
        }//end out if
        else{
            player2 = movePlayer(player2, roll);
            printf("Player 2 is now at square %d.\n\n", player2);
            printBoard();
            if(player2 == 100){
                printf("Player 2 wins!\n");
                won = 1;
            }//end inner if
        }//end else

        //switch to the other player
        currentPlayer = (currentPlayer == 1) ? 2 : 1;
    }//end while

    return 0;
}