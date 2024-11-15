/*
2D ARRAY
*/
#include <stdio.h>

#define row 3
#define col 3

int main()
{
    int array[row][col];
    int i, j;

    printf("Enter %d numbers\n", row*col);

    //enter data i.e whole numbers into array
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            //read in data
            scanf("%d", &array[i][j]);
        }//end inner for
    }//end outer for

    //display the data in the array
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf("\t%d", array[i][j]);
        }//end inner for
    }//end outer for

    return 0;
    
}//end main