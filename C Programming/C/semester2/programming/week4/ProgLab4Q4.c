/*
    Program Descriptor: Passing 1-D Array. Make a copy of Q2 above but this time, use your function to
                                change the contents of the array, i.e. multiply each number in the array by 2. When
                                your function has finished and your program execution returns to the main(), print the
                                contents of your array in your main() and see if the changes made to the contents of
                                the array in your function can be seen. If not, why?

                                Answer: the changes have been seen.


    Author: Aleksy Szopinski

    Date: 18/02/2025
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

    //printf("The average of these nums = %.2f", returnedavg);
    for(int i = 0;i<SIZE;i++)
    {
        printf("%d", array[i]);
    }
}

//Function Definitions
float average(int array[])
{  
    int sum;
    
    for(int i = 0;i<SIZE;i++)
    {
        sum = sum + array[i];

        array[i] = array[i] * 2;
    }

    return sum / SIZE;
}//end average