/*
    Program Descriptor: TicTacToe in C

    Author: Aleksy Szopinski

    Date: 04/11/2024
*/
#include <stdio.h>

#define row 3
#define col 3

int main()
{
    char grid[row][col] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
    int i, j;

    //display the grid
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("|%c|", grid[i][j]);
        }
        printf("\n");
    }

    //user input
    printf("You are X, enter which number you want your X to go");
    scanf("%d", &i);
    
    grid[i][j] = 'x';

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("|%c|", grid[i][j]);
        }
        printf("\n");
    }
    

    


}