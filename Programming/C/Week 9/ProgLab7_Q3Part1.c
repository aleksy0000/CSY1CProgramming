/*
    Program Descriptor: Write a program to read in fifteen numbers and display them as follows:
                        (a) each number on a seperate line
                        (b) on one line, each number separated by a single space
                        (c) as in (b) but in reverse to which they were input

    Author: Aleksy Szopinski

    Date: 12/11/2024
*/
#include <stdio.h>

#define NUMS 15

int main()
{
    int array[NUMS]; //I have decided to use a 1D array to keep it simple and because there is no need for 2 dimensions in the array for this program.
    int i;

    //Prompt and gather input of the 15 numbers
    for(i = 0; i < NUMS; i++)
    {
        printf("Enter Number %d: ", i + 1);
        scanf(" %d", &array[i]);
    }

    printf("\nYou have entered:\n");

    //display each number on a seperate line
    for(i = 0; i < NUMS; i++)
    {
        printf("%d\n", array[i]);
    }

    printf("\nOn a single line:\n");

    //display each number on one line seperated by a single space
    for(i = 0; i < NUMS; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\nIn reverse:\n");

    //display each number on one line seperated by a single space but in reverse
    for(i = NUMS - 1; i >= 0; i--)
    {
        printf("%d ", array[i]);
    }

    return 0;

}