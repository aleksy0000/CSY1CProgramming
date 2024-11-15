/*
Problem 7: Row and Column Sum
Description: Write a program that calculates and prints the sum of each row and each column in a 3x3 matrix.

Input: A 3x3 matrix.
Output: Display the sum of each row and each column.
*/
#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix[ROW][COL] = {1,2,3,
                            4,5,6,
                            7,8,9};
    int rowsum[ROW] = {0};
    int colsum[COL] = {0};
    int i, j;

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            rowsum[i] += matrix[i][j];
            colsum[j] += matrix[i][j];
        }
    }

    printf("\nRow sums:\n");
    for (int i = 0; i < 3; i++) {
        printf("Row %d sum = %d\n", i + 1, rowsum[i]);
    }

    // Print column sums
    printf("\nColumn sums:\n");
    for (int j = 0; j < 3; j++) {
        printf("Column %d sum = %d\n", j + 1, colsum[j]);
    }

    return 0;
}