/*
    Program Descriptor: Passing 1-D Array. Write a program that uses a function to calculate the average of 5
                        numbers in an array. In the main(), you must ask the user to enter 5 numbers and store
                        these in the array. Pass the array to a function in which the function calculates the
                        average of these 5 numbers. Return the average to your main() and display this.

    Author: Aleksy Szopinski

    Date:18/02/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 5

//Function Signatures
float average(int []);

//Main 
int main()
{
    //local variables
    int array[SIZE];
    float returnedavg;

    //populate array:
    printf("Please enter 5 numbers:\n");
    for(int i = 0;i<SIZE;i++)
    {
        scanf("%d", &array[i]);
    }//end for

    returnedavg = average(array);

    printf("The average of these nums = %.2f", returnedavg);
}

//Function Definitions
float average(int array[])
{  
    int sum;
    
    for(int i = 0;i<SIZE;i++)
    {
        sum = sum + array[i];
    }

    return sum / SIZE;
}//end average