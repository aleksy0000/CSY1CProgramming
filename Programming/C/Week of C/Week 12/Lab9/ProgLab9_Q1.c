/*
    Program Descriptor: Write a program declaring an integer (num1), a character (char1) and 2 pointers (ptr1
                        that points to an integer and ptr2 that points to a character).

                        Initialise num1 and char1 to contain an integer and character. 
                        
                        Initialise ptr1 to point to num1 and initialise ptr2 to point to char1. Your program should do the following:
                        a) Print the contents and address of num1 and char1 (on separate lines).
                        b) Print the contents of ptr1 and ptr2. (The output should be the same as the addresses of num1 and char1 above).
                        c) Using the dereference operator, print the contents of the addresses stored in ptr1 and ptr2.

                        Do ptr1 and ptr2 have address locations? Check and see, i.e., print the address of ptr1 and ptr2.

                        Try changing the delimiters (i.e., output type) in your printf statements (i.e., %d, %c,%p) and see what happens.
*/
#include <stdio.h>

int main()
{
    //variables:
    int num1 = 1;
    char char1 = 'c';
    int *ptr1;
    char *ptr2;

    ptr1 = &num1;
    ptr2 = &char1;

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

    return 0;//end program

}//end main()