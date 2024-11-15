/*
    Program Descriptor: Testing what happens when wrong delimiters are applied when printing variables.

    Author: Aleksy Szopinski

    Date: 24/09/2024
*/

#include <stdio.h>

int main()
{
    int num1;
    float num2;
    char letter;

    num1 = 500;
    num2 = 47.87;
    letter = 'R';

    printf("num1 contains %d,\nNum2 contains %f,\nLetter contains %c", num1, num2, letter);

    /*when the wrong delimiter is applied, random numbers are given back. 
    These random numbers are leftover memory from other programs. */

    return 0;
}