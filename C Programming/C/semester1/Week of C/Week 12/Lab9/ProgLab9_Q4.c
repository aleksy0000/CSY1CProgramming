/*
    Program Descriptor: Write a program that asks the user to enter 2 integer values. Store these in variables
                        called num1 and num2 respectively. Using pointers only, find the sum of these
                        numbers, store them in a third variable called sum, and display this value stored in
                        variable sum. (Hint: the dereference operator will be used to perform most of your
                        task). NB - don't forget that you will need 3 pointer variables

    Author: Aleksy Szopinski

    Date: 03/12/2024
*/
#include <stdio.h>

int main()
{
    //variables
    int num1;
    int num2;
    int sum;
    //pointer variables
    int *ptr1;
    int *ptr2;
    int *ptrsum;

    //pointer assignments
    ptr1 = &num1;
    ptr2 = &num2;
    ptrsum = &sum;

    *ptrsum = *ptr1 + *ptr2;

    return 0;//end program
}//end main