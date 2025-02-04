/*
    Write a program to accept a temparature in degrees fahr 
    and convert it into degress celsius. 

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/
#include <stdio.h>

int main(){
    float fahr;
    float celsius;

    printf("Enter a temparature in degrees fahrenheit");
    scanf("%f", &fahr);

    celsius = (fahr - 32.0)*(5.0/9.0);

    printf("%.2f degrees fahrenheit >>>> %.2f degrees celsius", fahr, celsius);

    return 0;
}