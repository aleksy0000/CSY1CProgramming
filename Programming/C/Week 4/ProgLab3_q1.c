/*
    1. Ask the user to enter 3 whole numbers and 
    display these on separate lines.

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/
#include <stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Please enter 3 whole numbers");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("You have entered:\n");
    printf("%d\n%d\n%d\n", num1, num2, num3);

    return 0;
}