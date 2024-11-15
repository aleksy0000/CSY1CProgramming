/*
    Program Descriptor: Write a program to enter numbers into an integer array with 3 elements, i.e., the size
                        of the array is 3. Your program must sort the array in ascending order (i.e., the first
                        element is the smallest and each element after the first is greater than or equal to the
                        element before it)

    Author: Aleksy Szopinski

    Date: 05/11/2024
*/
#include <stdio.h>

#define NUMS 3

int main()
{
    int array[NUMS];
    int i;
    int t; //temp mem

    //get the input
    printf("Enter 3 Numbers\n");
    for(i = 0; i < NUMS; i++)
    {
        scanf(" %d", &array[i]);
    }

    //Sort numbers in ascending order
    for(i = 0; i < NUMS; i++)
    {
        if(array[i] >= array[0] && array[i] != array[NUMS - 1])
        {
            if(array[i] > array[i + 1])
            {
                t = array[i];
                array[i] = array[i + 1];
                array[i + 1] = t;

                if(array[i] != array[0]  && array[i] < array[i - 1])
                {
                    t = array[i];
                    array[i] = array[i - 1];
                    array[i - 1] = t;
                }//end inner inner for
            }//end inner for
        }//end middle for
    }//end outer for

    for(i = 0; i < NUMS; i++)
    {
        printf("%d", array[i]);
    }//end for

    return 0;
    
}//end main()