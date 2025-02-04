/*
Write a program to:

    1.Create an integer variable and assign it a value.
    2.Create a pointer to the integer and print the value of the integer using the pointer.
    3.Modify the value of the integer using the pointer and print the updated value.

Challenge Question: What happens if you try to dereference a pointer before assigning it to a valid memory address?
Answer: If the pointer doesn't contain an address there is nothing to be dereferenced. Nothing will happen.
*/
#include <stdio.h>

int main()
{
    int var = 1;

    int *ptr;

    ptr = &var;

    printf("%d\n", *ptr);

    *ptr = *ptr + 1;

    printf("%d", var);

    return 0;
}