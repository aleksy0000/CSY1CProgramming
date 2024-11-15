/*
    Descriptor: Write a program to find the sum of all the odd integers in the range 1 to 99.

    Author: Aleksy Szopinski

    Date: 22/10/2024 
*/
#include <stdio.h>

int main()
{
    int i;
    int sum = 0;

    for(i = 1; i < 100; i++)
    {
        if(i % 2 != 0)
        {
            sum = sum + i;
        }
        printf("\n%d\n", sum);
    }
}