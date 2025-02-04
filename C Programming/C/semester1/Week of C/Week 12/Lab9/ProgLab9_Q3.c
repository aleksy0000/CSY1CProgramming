/*
    Program Descriptor: Write a program that uses two float variables called input1 and input2. Enter values 
                        for these variables. Using pointers (called ptr1 and ptr2), your program should do the following:

                            a) Print the address of input1 and input2 (on separate lines).

                            b) Print the address of ptr1 and ptr2 (on separate lines) - Remember, even though
                            these are pointers, they are still variables. Therefore, each will also have their
                            own address in memory (RAM).

                            c) Make ptr1 and ptr2 point to input1 and input2 respectively. Print the contents of
                            ptr1 and ptr2. (The output should be the same as the addresses of input1 and
                            input1 above).

                            d) Using the dereference operator, print the contents of the address stored in ptr1
                            and ptr2.

    Author: Aleksy Szopinski

    Date: 03/12/2024
*/
#include <stdio.h>

int main()
{
    //variables
    float input1;
    float input2;
    float *ptr1;
    float *ptr2;

    //assignments
    ptr1 = &input1;
    ptr2 = &input2;

    printf("Enter Input1:\n");
    scanf("%f", &*ptr1);
    printf("Enter Input2:\n");
    scanf("%f", &*ptr2);

    printf("\ninput1 address: %p\n", &input1);
    printf("\ninput2 address: %p\n", &input2);
    printf("\nptr1 contents: %p\n", ptr1);
    printf("\nptr2 contents: %p\n", ptr2);
    printf("\nptr1 address: %p\n", &ptr1);
    printf("\nptr2 address: %p\n", &ptr2);
    printf("\nptr1 dereferenced: %.2f", *ptr1);
    printf("\nptr2 dereferenced: %.2f", *ptr2);
    
    return 0;//end program
}