/*
    Program Descriptor: Write a program that uses an array to enter 5 integer numbers. Copy the contents of
                        this array into another array using only a loop.

    Author: Aleksy Szopinski

    Date: 05/11/2024
*/
#include <stdio.h>

#define NUMS 5

int main()
{
    int array1[NUMS];
    int array2[NUMS];
    int i;

    //enter 5 numbers into array 1
    printf("\nEnter 5 Numbers\n");
    for(i = 0; i < NUMS; i++)
    {
        scanf("%d", &array1[i]);
    }

    //copy contents of array 1 into array 2 and display both for comparison.
    for(i = 0; i < NUMS; i++)
    {
        array2[i] = array1[i];
        printf("\nArray 1 contains %d, Array 2 contains %d\n", array1[i], array2[i]);
    }

    return 0;
}