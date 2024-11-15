/*
    Descriptor: Write a program that asks the user to enter a number between 1 - 5. Your program
                should display all the numbers between 1 - 20 that are evenly divisible by this
                number. You will need to use a loop.
            
    Author: Aleksy Szopinski

    Date: 22/10/2024
*/
#include <stdio.h>

int main()
{
    int usernum; //this is where we will store the userinput  
    int i; //we will use i as the index and the divisor
    
    printf("\nPlease enter a number between 1 and 5\n");
    scanf("%d", &usernum);

    if(usernum > 0 && usernum < 6)
    {
        for(i = 0; i < 21; i++) //increments the for loop 20 times by 1
        {
            if(i % usernum == 0 && i != 0) // we are using the index for the for loop to divide the numbers for efficiency.
            {
                printf("\n%d is divisible by %d\n", i, usernum);
            }//end inner if

        }//end for
    }//end if
}//end main()