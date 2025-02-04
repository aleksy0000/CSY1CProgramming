/*
    Program Descriptor: Complete the following program so that it computes the sum of all the elements in the array.

    Author: Aleksy Szopinski

    Date: 19/11/2024
*/
#include <stdio.h>

#define ROW 4
#define COL 6

int main()
{
    int data[ROW][COL] = { {3, 2, 5, 7, 4, 2},
                           {1, 4, 4, 8, 13, 1},
                           {9, 1, 0, 2, 0, 0 },
                           {0, 2, 6, 3, -1, -8}
                        };
    
    int i, j;

    //declare the sum
    int sum;

    //compute the sum
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            sum = sum + data[ROW][COL];
        }
    }

    //display the sum
    printf("Sum = %d", sum);    

    return 0;
}