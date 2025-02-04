/*
    Swap two numbers using a function
*/
#include <stdio.h>

// Function to swap two numbers
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int num1 = 0;
    int num2 = 1;

    printf("before swap: num1 is %d, num2 is %d\n", num1, num2);

    //call function to swap num1 and num2
    swap(&num1, &num2);

    printf("after swap: num1 is %d, num2 is %d\n", num1, num2);

    return 0;
}