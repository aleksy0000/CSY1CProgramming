/*
    Program Descriptor: Pass by Value. Write a program to demonstrate the use of Pass by Value with a
                        function. Begin by creating an integer variable in your main() and initialise it to 1.
                        Print this value here. Next, call your function and pass this variable as a parameter to
                        the function. Increment the parameter variable in your function by 2 and print this
                        value. Your function should end here, and execution returns back to where the
                        function was called. Finally, display the value of the variable in your main() again and
                        see if it has changed value. Did the function increment the variable in your main()?

                        Pass by Reference. Write a program similar to Q4 above but this time use Pass by
                        Reference to modify the integer variable declared in main().
    Author: Aleksy Szopinski

    Date: 11/02/2025
*/
//Libraries
#include <stdio.h>

//Symbolic Names:
//#define SIZE 5

//Function Signatures:
void passbyref(int *);

int main()
{
    //Variables:
    int num;

    //prompt and gather user input
    printf("Enter Num\n");
    scanf("%d", &num);

    //display num before the function
    printf("Before Function = %d\n", num);

    //send the address of num to the function
    passbyref(&num);

    //display num after the function.
    printf("After Function = %d", num);

    return 0;//end program
}

void passbyref(int *ptr)
{
    (*ptr)++; //increment num by 1
}