/*
    Program Descriptor: Returning a value from a function. Write a program that uses a function to calculate
                        the average of 3 numbers. Your main() should ask the user to enter these 3 numbers
                        and they should be passed to the function as parameters. Your function should
                        calculate the average and return this value back to the main(). Your main() should
                        then display this average value.
    Author: Aleksy Szopinski

    Date: 11/02/2025
*/
#include <stdio.h>

//function signature
int average(int, int, int);

int main()
{
    int num1;
    int num2;
    int num3;
    float avg;

    printf("Enter 3 numbers\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    avg = average(num1,num2,num3);

    printf("The average is %.2f", avg);

    return 0;
}

int average(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;
    float average = sum / 3;

    return average;
}
