/*
    Mandatory Lab Question: 
    Write a program to input three floating-point numbers from 
    the keyboard and to calculate

    (a) their sum
    (b) their average

    display the results to three decimal places

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/
#include <stdio.h>

int main(){
    float fpn1;
    float fpn2;
    float fpn3;
    float sum;
    float average;

    //input 3 floating-point numbers.
    printf("\nEnter 3 floating-point numbers\n");
    scanf("%f %f %f", &fpn1, &fpn2, &fpn3);

    //Calculate the sum
    sum = fpn1 + fpn2 + fpn3;

    //Calculate the avg
    average = sum / 3;

    //Print the resulting sum and average.
    printf("\nThe sum of %.3f, %.3f, %.3f is %.3f and the average is %.3f\n", fpn1, fpn2, fpn3, sum, average);

    return 0;

}//end main