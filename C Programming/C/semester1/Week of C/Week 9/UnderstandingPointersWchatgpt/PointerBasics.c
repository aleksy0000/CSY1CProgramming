/*
Write a program that does the following:
-Declare an integer variable num and initialize it to 10.
-Declare a pointer ptr and make it point to num.
-Print the value of num using the pointer.
*/
#include <stdio.h>

int main()
{
    int num = 10;

    int *ptr1;

    ptr1 = &num;

    printf("%d", *ptr1);

    return 0;
}