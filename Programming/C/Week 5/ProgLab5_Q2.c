/*
    Descriptor: Program that asks for an input of an integer between 1 and 100.
    Check if the integer is even or odd and print a message on the screen stating "Number x is even"
    or "number y is odd".

    Author: Aleksy Szopinski

    Date: 15/10/2024
*/
#include <stdio.h>

int main()
{
    int num; //int declaration for user input

    printf("Input a number between 1 and 100\n");
    scanf("%d", &num);

    if(num <= 100 && num >= 1) //check if the number is between 1 and 100
    {
        if(num % 2 == 0) //check if number is even.
        {
            printf("Number %d is even", num);
        }//end inner if 
        else
        {
            printf("Number %d is odd", num);
        }//end inner else
    }//end if 
    else
    {
        printf("INVALID INPUT");
    }//end else

    return 0;
}//end main