/*
    Program Descriptor: Program to show how to access an array using the dereference operator.
*/
#include <stdio.h>

#define SIZE 5

int main()
{
    int a[SIZE] = {2, 4, 6, 8, 10};
    int i;

    //display the contents of an array
    for(i = 0; i < SIZE; i++)
    {
        printf("\nElement %d contains %d, same as %d", i, a[i], *(a + i));
    }//end for

    return 0;
}//end main