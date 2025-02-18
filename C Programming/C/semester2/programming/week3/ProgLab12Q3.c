/*
    Program Descriptor: Returning a value from a function. Write a program that uses a function to check for
                        the highest value of 3 numbers. You should enter the 3 numbers using main() and
                        these should be passed to your function. Your function should find the highest of
                        these numbers and return it back to main(). Your main() should then display this
                        highest number.
    Author: Aleksy Szopinski

    Date: 11/02/2025
*/
#include <stdio.h>

int highestval(int, int, int);

int main()
{
    int num1;
    int num2;
    int num3;
    int max;

    printf("Enter 3 numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    max = highestval(num1, num2, num3);

    printf("max = %d", max);

    return 0;
}

int highestval(int num1, int num2, int num3)
{
    if(num1 > num2 && num1 > num3)
    {
        return num1;
    }
    else if(num2 > num1 && num2 > num3)
    {
        return num2;
    }
    else
    {
        return num3;
    }
}