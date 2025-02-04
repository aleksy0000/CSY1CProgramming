/*
    Program Descriptor: Write a program using an array that will allow the user to input 3 temperature
                        readings in Fahrenheit. After all the temperatures have been read from the keyboard,
                        display each of these temperatures on the screen and its corresponding temperature in
                        Celsius.

                        Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0)

    Author: Aleksy Szopinski

    Date: 05/11/2024
*/
#include <stdio.h>

#define TEMPS 3

int main()
{
    float temparray[TEMPS];
    int i;

    //read 3 temperatures from user.
    printf("Enter 3 temperatures in fahrenheit\n");
    for(i = 0; i < TEMPS; i++)
    {
        scanf(" %f\n", &temparray[i]);
    }

    //Display temperatures in fahrenheit and celsius
    for(i = 0; i < TEMPS; i++)
    {
        printf("Temperature 1 in fahr: %f\t", temparray[i]);
        printf("Temperature 1 in Celsius: %f\n", (temparray[i] - 32.0) * (5.0/9.0));
    }

    return 0;
}