/*
    Program Descriptor: Mandatory Question, Show how to initialise two 3x4 arrays (2-Dimensional arrays with 3 rows and 4
                        columns in each) when they are declared. In your program, declare a 3rd 3x4 array.
                        Multiply each corresponding element in the 1 st and 2 nd array and store this product in
                        the corresponding element of the 3 rd array. For example, array3[0][0] = array1[0][0] x
                        array2[0][0], array3[0][1] = array1[0][1] x array2[0][1], etc..

    Author: Aleksy Szopinski

    Date: 19/11/2024
*/
#include <stdio.h>

#define ROW 3
#define COL 4

int main()
{
    //declarations
    int A1[ROW][COL] = {1,2,3,4,
                        5,6,7,8,
                        9,10,11,12};
    int A2[ROW][COL] = {1,2,3,4,
                        5,6,7,8,
                        9,10,11,12};
    int A3[ROW][COL] = {0}; //array that will contain the product of A1 and A2
    int i, j;

    //Display contents of array 1 (A1)
    printf("Array 1:\n");
    
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d\t", A1[i][j]);
        }//end inner for

        printf("\n\n");

    }//end outer for

    //Display contents of array 2 (A2)
    printf("\nArray 2:\n");

    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("%d\t", A1[i][j]);
        }//end inner for

        printf("\n\n");

    }//end outer for

    printf("\nArray 1 * Array 2 = Array 3:\n");

    //multiply A1 and A2, store product in array 3 and display array 3 (A3)
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            A3[i][j] = A1[i][j] * A2[i][j];
            printf("%d\t", A3[i][j]);
        }//end inner for

        printf("\n\n");

    }//end outer for

    return 0;

}//end main()