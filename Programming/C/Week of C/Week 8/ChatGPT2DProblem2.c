/*
    Program Descriptor: Objective: Write a program that Defines a 2x5 array and allows the user to input 10 integer values 
                                   (two rows and five columns). Copy the elements from the first array into the second array 
                                   in reverse order (starting from the last element in the first array).

    Author: Aleksy Szopinski

    Date: 05/11/2024
*/
#include <stdio.h>

#define ROW 2
#define COL 5

int main()
{
    int array1[ROW][COL];
    int array2[ROW][COL];
    int i, j;

    //prompt and gather input
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("Enter value for row %d column %d\t", i, j);
            scanf(" %d", &array1[i][j]);
        }
    }

    //copy array 1 to array 2 in reverse order
    for(i = ROW - 1; i >= 0; i--)
    {
        for(j = COL - 1; j >= 0; j--)
        {
            array2[i][j] = array1[ROW - 1 - i][COL - 1 - j];
        }
    }

    //print array 1 for comparison
    printf("\nArray 1:\n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    //print array 2 for comparison
    printf("\nArray 2:\n");
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }

    return 0;

}