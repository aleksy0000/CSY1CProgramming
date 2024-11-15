/*
Problem 4: Transpose of a Matrix
Description: Write a program that takes a 3x3 matrix of integers and computes its transpose. (The transpose of a matrix is formed by swapping rows with columns.)

Input: A 3x3 matrix of integers.
Output: Display the transposed matrix.
*/
#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix[ROW][COL] = {1,2,3,
                            4,5,6,
                            7,8,9};
    int transpose[ROW][COL] = {0};
    int i, j;

    //print og matrix
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n\ntransposing...\n\n\n");

    //transpose and print transposed matrix
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            transpose[i][j] = matrix[j][i];
            printf(" %d ", transpose[i][j]);
        }
        printf("\n");
    }
}