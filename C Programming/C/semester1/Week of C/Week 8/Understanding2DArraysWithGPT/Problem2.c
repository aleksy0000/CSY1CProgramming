/*
Problem 2: Sum of Matrix Elements
Description: Write a program that computes the sum of all elements in a 2D array of integers.

Input: A 3x3 matrix (array of 3 rows and 3 columns).
Output: Display the sum of all elements in the matrix.
*/
#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    //declarations
    int matrix[ROW][COL] = {1,2,3,4,5,6,7,8,9};
    int i, j, sum = 0;

    //compute sum of all elements in array
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            sum = sum + matrix[i][j];
        }//end inner for
    }//end for

    printf("%d", sum);

    return 0;
}//end main