/*
    Descriptor: Q6 From C book, write a program that reads a single numeral from the keyboard and displays 
    its value as a word. For example an input of 5 will display 'five'.

    Author: Aleksy Szopinski

    Date: 15/10/2024
*/
#include <stdio.h>

int main()
{
    char num;

    printf("Enter a single numeral\n");
    scanf("%c", &num);

    switch(num)
    {
        case '1': 
        {
            printf("ONE");
            break;
        }
        case '2': 
        {
            printf("TWO");
            break;
        }
        case '3': 
        {
            printf("THREE");
            break;
        }
        case '4': 
        {
            printf("FOUR");
            break;
        }
        case '5': 
        {
            printf("FIVE");
            break;
        }
        case '6': 
        {
            printf("SIX");
            break;
        }
        case '7': 
        {
            printf("SEVEN");
            break;
        }
        case '8': 
        {
            printf("EIGHT");
            break;
        }
        case '9': 
        {
            printf("NINE");
            break;
        }
    }

    return 0;
}