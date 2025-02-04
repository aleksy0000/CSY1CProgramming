/*
    Program Descriptor: Objective: Write a program that defines a 2x3 integer array. You need to:

                        Allow the user to input 6 integer values (two rows and three columns).

                        Copy the contents of this 2D array into another 2D array using a loop.
*/
#include <stdio.h>

#define ROW 2
#define COL 3

int main()
{
    //declare 2 arrays and 2 index values.
    int array[ROW][COL];
    int arraycopy[ROW][COL];
    int i, j;

    //Prompt and gather user input to populate the array.
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            printf("Enter %d Numbers\n", ROW * COL);
            scanf(" %d", &array[i][j]);
            printf("\nYou've entered %d\n", array[i][j]);
        }//end inner for
    }//end outer for

    //copy the contents of array 1 into array 2;
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            arraycopy[i][j] = array[i][j];
            printf("\ncopied %d from array 1, row %d column %d into array 2\n", array[i][j], i + 1, j + 1);
            printf("\nArray 2 now contains %d in row %d column %d\n", arraycopy[i][j], i + 1, j + 1);
        }
    }

    return 0;

}//end main()

//AREAS FOR IMPROVEMENT
/*
Input Prompting:In the user input section, the prompt says "Enter %d Numbers", 
                but this can be misleading because you're asking for the numbers one by one. 
                It would be better to say something like "Enter value for row X, column Y".

Displaying Copied Values:While you're displaying the copied values, 
                         there might be a bit of redundancy. It might be helpful to display the contents of the original 
                         and copied arrays after the copying process is finished. 
                         This would make it clearer to the user that the copying happened.

Display of Array Contents: After copying the arrays, you could consider printing both arrays at the end 
                           to show the final state of both the original and the copied arrays, 
                           rather than printing details after each copy action.
*/