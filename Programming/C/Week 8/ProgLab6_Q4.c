/*
    Program Descriptor: Define an integer array with 4 elements. Write a program that will allow the user to
                        enter 4 numbers into this array and do the following:
                        • Display the contents of the array to the screen in the same order they were
                        entered.
                        • Swap the 1st and 2nd numbers in the array and swap the 3rd and 4th numbers in
                        the array. Now display the numbers on the screen using this new order.

    Author: Aleksy Szopinski

    Date: 05/11/2024
*/
#include <stdio.h>

#define NUMS 4

int main()
{
    int array[NUMS];
    int i;
    int t; //temp variable

    //prompt and gather user input
    printf("\nEnter 4 Numbers\n");

    for(i = 0; i < NUMS; i++)
    {
        scanf("%d", &array[i]);
        printf("\nArray 1 Element %d now contains %d\n", i, array[i]);
    }

    t = array[1];
    array[1] = array[2];
    array[2] = t;

    t = array[3];
    array[3] = array[4];
    array[4] = t;

    for(i = 0; i < NUMS; i++)
    {
        printf("\nArray 1 Element %d contains %d\n", i, array[i]);
    }

    return 0;
}