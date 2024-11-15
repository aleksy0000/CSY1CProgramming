/*
    Descriptor: Q3 from C book, Write a program that reads in two integers and check if the first int is 
    evenly divisble by the second.

    Author: Aleksy Szopinski

    Date: 15/10/2024
*/
#include <stdio.h>

int main()
{
    //int declarations for input
    int num1;
    int num2;

    //ask for input and get input.
    printf("Please input two numbers\n");
    scanf(" %d %d", &num1, &num2);

    //check if num1 is divisible by num2.
    if(num1 % num2 == 0)
    {
        printf("%d is evenly divisible by %d", num1, num2);
    }
    else
    {
        printf("%d is NOT evenly divisible by %d", num1, num2);
    }
    return 0;
}