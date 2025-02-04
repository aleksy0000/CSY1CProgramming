/*
Description: Write a program that adds two 3x3 matrices and stores the result in a third matrix.

Input: Two 3x3 matrices.
Output: Display the resulting matrix after addition.
*/
#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix1[ROW][COL] = {1,2,3,
                             4,5,6,
                             7,8,9};
    int matrix2[ROW][COL] = {1,2,3,
                             4,5,6,
                             7,8,9};
    int matrixsum[ROW][COL] = {0};
    int i, j;

    //compute sum
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            matrixsum[i][j] = matrix1[i][j] + matrix2[i][j];
            printf(" %d ", matrixsum[i][j]);
        }
        printf("\n");
    }

    return 0;
}