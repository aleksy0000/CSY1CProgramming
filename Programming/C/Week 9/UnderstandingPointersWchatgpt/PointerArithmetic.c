/*
Write a program to:

Create an array of integers: {1, 2, 3, 4, 5}.
Use a pointer to print all the elements of the array.

Hint: Increment the pointer to access the next element.
*/
#include <stdio.h>

#define NUMS 5

int main()
{
    int array[NUMS] = {1,2,3,4,5};
    int i;

    int *ptr;

    ptr = array;

    for(i = 0; i < NUMS; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    return 0;
}