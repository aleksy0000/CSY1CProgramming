/*
    Descriptor: Write a program that counts from one to ten, prints the values on a separate line for
                each, and prints a message stating, "This number is three" and "This number is seven"
                when the count is 3 and when the count is 7 respectively.

    Author: Aleksy Szopinski

    Date: 22/10/2024
*/
#include <stdio.h>

int main()
{
    int i; //the index

    for(i = 0; i < 11; i++)
    {
        if(i != 3 && i != 7)
        {
            printf("\n%d\n", i);
        }//end if condition
        else if(i == 3 || i == 7);
        {
            if(i == 3)
            {
                printf("\nThis number is three!\n");
            }//end inner if 
            else if(i == 7)
            {
                printf("\nThis number is seven!\n");
            }//end inner else if
        }//end else if condition
    }//end for

    return 0;
}//end main()