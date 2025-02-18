/*
    Program Descriptor: Returning a value from a function. Write a program that uses a function to check if a
                        number is even or odd. Your main() should allow the user to enter any number and
                        this should be passed to your function. Your function should check if the number is
                        even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
                        result.
    Author: Aleksy Szopinski

    Date: 11/02/2025
*/
#include <stdio.h>

//function signature:
int evenorodd(int);

int main()
{
    int num;
    int result;

    printf("Enter a number to be evaluated:\n");
    scanf("%d", &num);

    result = evenorodd(num);

    if(result == 1)
    {
        printf("It's even");
    }
    else
    {
        printf("It's odd");
    }

    return 1;
}

int evenorodd(int num)
{
    if(num % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

