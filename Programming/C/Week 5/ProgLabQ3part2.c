/*
    Descriptor: Q5 From C book, in a triangle the sum of two sides must be greater than the third side. 
                Write a program to input three numbers and determine if they form a valid triangle.

    Author: Aleksy Szopinski

    Date: 15/10/2024
*/
#include <stdio.h>

int main()
{
    int side1;
    int side2;
    int side3;
    int sum;

    printf("Please enter all 3 sides of the triangle");
    scanf(" %d %d %d", side1, side2, side3);

    sum = side1 + side2;

    if(sum > side3)
    {
        printf("This is a valid triangle");
    }
    else
    {
        printf("This is NOT a valid triangle");
    }

    return 0;

}