/*
Problem 1: Matrix Initialization and Display

Description: Write a program that takes a 3x3 matrix (2D array) of integers as 
input from the user, stores it, and then prints it out in matrix form.

input: 9 integers entered by the user (e.g., 1 2 3 4 5 6 7 8 9)
Output: Display the matrix in a 3x3 grid.
*/
#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix[ROW][COL];
    int i, j;

    //input
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("Enter value for row %d column %d\n", i, j);
            scanf(" %d", &matrix[i][j]);
        }
    }

    //output
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}//end main