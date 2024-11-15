/*
Problem 6: Counting Specific Element Occurrences
Description: Write a program that counts how many times a specific integer appears in a 3x3 matrix.

Input: A 3x3 matrix and an integer to search for.
Output: Display the count of the integer's occurrences in the matrix.
*/
#include <stdio.h>

#define ROW 3
#define COL 3

int main()
{
    int matrix[ROW][COL] = {1,3,2,
                            3,4,3,
                            5,3,9};
    int i, j, num = 0;

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            if(matrix[i][j] == 3)
            {
                num = num + 1;
                printf("Number found !\n");
            }
        }
    }

    printf("\n\n\nNumber found %d times", num);

    return 0;
}