/*
    Program Descriptor: Write a program that defines an integer array with 5 elements. Your program must do
                        the following:
                        • Enter 5 integer values into the array.
                        • Define another integer array with 5 elements and copy the values from the 1st array into the 2nd array in reverse order 
                        (e.g., the value in the first element of the 1st array will be copied into the last element in the 2nd array, etc..).

    Author: Aleksy Szopinski

    Date: 05/11/2024
*/
#include <stdio.h>

#define NUMS 5

int main()
{
    //declare the 2 arrays and the index variable
    int array1[NUMS];
    int array2[NUMS];
    int i;

    //Prompt and gather user input of 5 integer values
    printf("Please enter 5 integer values\n");

    for(i = 0; i < NUMS; i++)
    {
        printf("\n");
        scanf("%d", &array1[i]);
        printf("\n");
        printf("\nArray 1 Element %d now contains %d\n", i, array1[i]);
    }//end for

    //line between the array outputs for readability in terminal
    printf("\n______________________________________________\n\n");

    //copy elements of array 1 into array 2 in reverse order
    for(i = NUMS - 1; i >= 0; i--)
    {
        array2[i] = array1[NUMS - 1 - i];
        printf("\nArray 2 Element %d now contains %d\n", i, array2[i]);
    }//end for

    return 0;
}//end main()