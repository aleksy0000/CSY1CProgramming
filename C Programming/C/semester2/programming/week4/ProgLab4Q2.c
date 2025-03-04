/*
    Program Descriptor: Passing 1-D Array. Write a program that uses a function to find the highest number in
                        an array containing 5 numbers. In the main(), you must ask the user to enter 5
                        numbers and store these in the array. Pass the array to a function and your function
                        must find the highest number. Return this number to your main() and display it.

    Author: Aleksy Szopinski

    Date: 18/02/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 5


//Function Signatures
int maxnum(int []);


//Main 
int main()
{
    //local variables
    int array[SIZE];
    int maximum;

    //prompt and populate array with user input.
    printf("\nPlease enter 5 numbers:\n");
    for(int i = 0;i<SIZE;i++)
    {
        scanf("%d", &array[i]);
    }//end for

    printf("\nIdentifiying maximum value in array...\n");

    maximum = maxnum(array);
    
    printf("\nMaximum = %d\n", maximum);

    return 0;//end program
}

//Function Definitions
int maxnum(int array[])
{
    int max = array[0];

    for(int i = 1;i<SIZE;i++)
    {
        if(max < array[i])
        {
            max = array[i];
        }//end if
    }//end for

    return max;
}//end maxnum