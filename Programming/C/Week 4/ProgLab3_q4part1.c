/*
    Suppose that v1, v2 and v3 are three floating point variables with values 5.0, -4.5 and 1.25
    respectively, write a printf() statement to display this message:
    v1 =5 v2 = -4.5 v3 = 11.25

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/ 
#include <stdio.h>

int main(){
    float v1 = 5;
    float v2 = -4.5;
    float v3 = 11.25;

    printf("v1 = %.0f v2 = %.1f v3 = %.2f", v1, v2, v3);

    return 0;
}