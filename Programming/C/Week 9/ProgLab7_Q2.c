/*
    Program Descriptor: Write a program that uses a 3x2 (2-D) array. Your program must do the following:
                        a) Enter values into the array
                        b) Display the values in the array
                        c) Find the smallest & largest value and display both to standard output
                        d) Calculate the average of the values and display to standard output
    Author: Aleksy Szopinski

    Date: 12/11/2024
*/
#include <stdio.h>

#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL];
    int i, j;
    int min;
    int max;
    int total = 0;
    float average;

    //user input
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("Enter value for row %d col %d:", i, j);
            scanf(" %d", &array[i][j]);
        }
    }

    //print array
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    min = array[0][0];
    max = array[0][0];

    //get min and max
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            total = total + array[i][j];
            if(array[i][j] < min)
            {
                min = array[i][j];
            }//end if
            else if(array[i][j] > max);
            {
                max = array[i][j];
            }//end else if
        }//end column for
    }//end row for

    printf("\nMinimum value in array: %d\n", min);
    printf("\nMaximum value in array: %d\n", max);

    average = (float)total / (ROW * COL);

    printf("\nAverage of this array: %.2f", average);

    return 0;
}