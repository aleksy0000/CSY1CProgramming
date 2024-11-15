/*
    Program Descriptor: Program to illustrate errors in a C program

    Author: Aleksy Szopinski

    Date: 24/09/2024

*/

#include <stdio.h>

int main()
{

    int num1, num2;
    float num3;

    num1 = 400;
    num2 = 600;
    num3 = num2;
    

    printf("num1 contains %d\n", num1);

    printf("num2 contains %d and num3 contains %f", num2, num3);

    return 0;
}
