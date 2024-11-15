/*
    Descriptor: Write a C program where the user enters a positive integer number, and compute the
                following sequence:
                if the number is even, halve it
                if the number is odd, multiply by 3 and add 1.
                (i) Repeat this process until the number is 1, displaying the number value each
                    time.
                (ii) Display the number of times, i.e., the number of steps the process in part (i)
                    above, was performed.

    Author: Aleksy Szopinski

    Date: 22/10/2024
*/
#include <stdio.h>

int main()
{
    int usernum; //Where we will store the user input 
    int steps = 0; //our step counter starting at 0 steps.

    //prompt and get user input
    printf("Please enter a positive integer:\t");
    scanf(" %d", &usernum);
    
    if(usernum < 0 || usernum == 0) //check for invalid inputs i.e minus or 0
    {
        printf("Invalid Input, Please enter a positive integer:\t");
        scanf(" %d", &usernum);

        while(usernum != 1) //runs the while loop until usernum contains 1.
        {
            if(usernum % 2 == 0) //halve usernum if it is even
                {
                    printf("\nThe previous number is even, so we halve.\n");
                    usernum = usernum / 2;
                }
            else if(usernum % 2 != 0) //multiply usernum by 3 and add 1 if it is odd.
                {
                    printf("\nThe previous number is odd, so we multiply by 3 and add 1.\n");
                    usernum = (usernum * 3) + 1;
                }
            
            printf("%d\n", usernum); //print current state of the number

            steps = steps + 1; //count steps

        }//end while
    }
    else if(usernum > 0) //check if the input is a positive integer
    {   
        while(usernum != 1) //runs the while loop until usernum contains 1.
        {
            if(usernum % 2 == 0) //halve usernum if it is even
                {
                    printf("\nThe previous number is even, so we halve.\n");
                    usernum = usernum / 2;
                }
            else if(usernum % 2 != 0) //multiply usernum by 3 and add 1 if it is odd.
                {
                    printf("\nThe previous number is odd, so we multiply by 3 and add 1.\n");
                    usernum = (usernum * 3) + 1;
                }
            
            printf("%d\n", usernum); //print current state of the number

            steps = steps + 1; //count steps

        }//end while
    }//end if

    printf("\nThis process took %d steps\n", steps);

    return 0;
}//end main()