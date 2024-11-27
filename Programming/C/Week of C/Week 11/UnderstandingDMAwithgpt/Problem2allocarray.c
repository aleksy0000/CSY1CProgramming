/*
Problem 2: Allocating an Array
    1.Use malloc to allocate memory for an array of integers of size 5.
    2.Prompt the user to input 5 integers to fill the array.
    3.Print the integers using both array indexing (e.g., arr[i]) and pointer arithmetic (e.g., *(arr + i)).
    4.Free the allocated memory.
Challenge Question: What happens if you forget to free the allocated memory?
Answer: If you don't free the allocated memory, at the end of the program the memory will be
still in use but after some time the OS will find that the memory is not being used and it will reallocated 
to a program that needs it.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array_size;
    int no_bytes;
    int *ptr;
    int i;

    printf("Enter array size");
    scanf(" %d", &array_size);

    int* arr = (int*)malloc(array_size * sizeof(int));

    if(arr == NULL)
    {
        printf("Mem Alloc Failed\n");
        return 0;
    }
    else
    {
        printf("Mem alloc success\n");

        printf("Fill the array");
    for(i = 0; i < array_size; i++)
    {
        scanf(" %d", &arr[i]);
    }

    for(i = 0; i < array_size; i++)
    {
        printf(" %d", arr[i]);
    }

    free(arr);

    return 0;
    }

}