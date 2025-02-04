/*
Problem 3: Find Maximum Element in a 2D Array
Description: Write a program that finds the largest number in a 2D array of integers.

Input: A 3x3 matrix of integers.
Output: Display the maximum element in the matrix.
*/
#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix[ROW][COL] = {35,88,93,
                            89,89,29,
                            100,99,94};

    int i, j, max = matrix[0][0];

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            if(max < matrix[i][j])
            {
                max = matrix[i][j];
            }//end if
        }//end col for
    }//end row for

    printf("Max: %d", max);
    
    return 0;
}//end main