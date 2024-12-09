/*
    Program Descriptor: Modify your program (Q1) above to do the following:

                        a) Declare a third pointer ptr3 that points to an integer. Initialise this to point to char1. Does this compile? If not, why?

                        b) Using the dereference operator, print the contents of the address stored in ptr3 with %d and %c. Is there a difference? If yes, explain what this difference is(include as a comment in your code)

    Author: Aleksy Szopinski

    Date: 03/12/2024
*/
#include <stdio.h>

int main()
{
    //variables:
    int num1 = 1;
    char char1 = 'c';
    int *ptr1;
    char *ptr2;
    int *ptr3;

    ptr1 = &num1;
    ptr2 = &char1;

    ptr3 = &char1; //this compiles but it gives a warning that we are trying to assign variables with incompatible data types.

    //print contents and addresses
    printf("\nnum1 contents: %d | Address: %p\n", num1, &num1);
    printf("\nchar1 contents: %c | Address: %p\n", char1, &char1);

    //print contents of ptr1 and ptr2
    printf("\nptr1 contains address of num1: %p\n", ptr1);
    printf("\nptr2 contains address of char1: %p\n", ptr2);

    //dereference ptr1 and ptr 2
    printf("\nthe contents of the variable ptr1 is pointing to: %d\n", *ptr1);
    printf("\nthe contents of the variable ptr2 is pointing to: %c\n", *ptr2);

    //print the address of ptr1 and ptr2
    printf("\nptr1 address: %p\n", &ptr1);
    printf("\nptr2 address: %p\n", &ptr2);

    //print the contents of ptr3 using wrong delimiter
    printf("\nptr3 contents: %p\n", ptr3);
    printf("\nptr3 contents: %d\n", *ptr3);
    printf("\nptr3 contents: %c\n", *ptr3);
    //when printing contents of ptr3:
    // -when we use %d I think we should get the numeric version of the hexadecimal address but we get random data instead.
    // -when we use %c we get a random ASCII character.
    //when dereferencing ptr3:
    // -when we use %d we might be getting random data but it's the same number every time so maybe not.
    // -when we use %c it works! even though they are incompatible data types.

    return 0;//end program

}//end main()