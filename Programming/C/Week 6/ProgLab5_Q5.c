/*
    Descripor: Using a loop, display all the even numbers from 1 - 100, separated by commas (Hint:
                use the modulus operator, i.e., % )

    Author: Aleksy Szopinski

    Date: 22/10/2024
*/
#include <stdio.h>

int main()
{
    int i;
    for(i = 1; i < 101; i++)
    {
        if(i % 2 == 0)
        {
            printf("\n%d is even\n", i);
        }
        /*else
        {
            printf("\n%d is odd\n", i);
        }*/
    }

    return 0;
}