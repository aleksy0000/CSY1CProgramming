/*
    Program Descriptor: Passing 1-D Array. Write a program that asks the user to enter 5 numbers from
                        standard input. Pass the array to a function where the function checks each number in
                        the array if it is even or odd. Your function should display each number and state
                        whether it is even or odd. Finally, your function should calculate the total number of
                        even numbers only and return this number to your main() and display it.

    Author: Aleksy Szopinski

    Date:18/02/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 5

//Function Signatures
int totalevennums(int []);

//Main 
int main()
{
    //local variables
    int array[SIZE];
    int total_even_numbers;

    //populate area
    printf("Enter 5 Numbers:\n");
    for(int i = 0;i<SIZE;i++)
    {
        scanf("%d", &array[i]);
    }//end for

    //call function
    total_even_numbers = totalevennums(array);

    printf("\nTotal even numbers = %d\n", total_even_numbers);

    return 0;//end program
}

//Function Definitions
int totalevennums(int array[])
{
    int total;

    for(int i = 0;i<SIZE;i++)
    {
        printf("%d is:",array[i]);
        if(array[i] % 2 == 0)
        {
            printf("\nEVEN\n");
            total = total + array[i];
        }//end if
        else
        {
            printf("\nODD\n");
        }//end else
    }//end for

    return total;
}//end totalevennums