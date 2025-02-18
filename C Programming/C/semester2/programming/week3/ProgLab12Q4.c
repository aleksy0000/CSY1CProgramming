/*
    Program Descriptor: Pass by Value. Write a program to demonstrate the use of Pass by Value with a
                        function. Begin by creating an integer variable in your main() and initialise it to 1.
                        Print this value here. Next, call your function and pass this variable as a parameter to
                        the function. Increment the parameter variable in your function by 2 and print this
                        value. Your function should end here, and execution returns back to where the
                        function was called. Finally, display the value of the variable in your main() again and
                        see if it has changed value. Did the function increment the variable in your main()?
    Author: Aleksy Szopinski

    Date: 11/02/2025
*/
#include <stdio.h>

void passbyvalue(int);

int main()
{
    int num;

    printf("Enter Num\n");
    scanf("%d", &num);

    printf("Before Function = %d\n", num);

    passbyvalue(num);

    printf("After Function = %d", num);

    return 0;
}

void passbyvalue(int num)
{
    num++;
}