/*
    Descriptor: Program that calculates and displays the sum of integers and 
                the average of floating-point numbers.

    Author: Aleksy Szopinski

    Date: 01/10/2024
*/

#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int num4 = 4;
    int num5 = 5;
    int sum;
    float f1 = 1.0;
    float f2 = 1.1;
    float f3 = 1.2;
    float f4 = 1.3;
    float f5 = 1.4;
    float f6 = 1.5;
    float f7 = 1.6;
    float f8 = 1.7;
    float f9 = 1.8;
    float f10 = 1.9;
    float f11 = 2.0;
    float avg;

    printf("1 + 2 + 3 + 4 + 5\n");
    sum = num1 + num2 + num3 + num4 + num5;
    printf("This is the sum of the integers: %d\n\n", sum);

    printf("1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6 + 1.7 + 1.8 + 1.9 + 2.0 / 11\n");
    avg = (f1 + f2 + f3 + f4 + f5 + f6 + f7 + f8 + f9 + f10 + f11) / 11;
    printf("This is the avg of the floats: %f", avg);



}