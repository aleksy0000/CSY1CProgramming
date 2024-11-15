/*
    Ask the user to enter 3 floating-point numbers (i.e., numbers with a decimal part).
    Display the 1st correct to 4 decimal places, the 2nd correct to 3 decimal places, and
    the 3rd with no decimal places on separate lines.

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/
#include <stdio.h>

int main(){
    float fpn1;
    float fpn2;
    float fpn3;

    printf("Enter 3 float-point numbers");
    scanf("%f %f %f", &fpn1, &fpn2, &fpn3);

    printf("%.4f\n%.3f\n%.0f", fpn1, fpn2, fpn3);

    return 0;
}