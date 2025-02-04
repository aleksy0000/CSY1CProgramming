/*
    Descriptor: Program that asks user to enter a character from standard-input
    and display a message whether the character is a vowel (upper and lowercase). e.g A, E, I, O, U

    Author: Aleksy Szopinski

    Date: 15/10/2024
*/

#include <stdio.h>

int main()
{
    char letter; //char declaration for input.

    printf("Please enter a letter\n");
    scanf("%c", &letter);

    //the switch statement that will test the input for vowels.
    switch(letter)
    {
        //These case statements will test the input for the presence of a vowel.
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I': 
        case 'o':
        case 'O': 
        case 'u':
        case 'U':
        {
            printf("This is a vowel!\n");
            break;
        }//end case

        //The default statement is for the inputs not included above.
        default: 
        {
            printf("THIS IS NOT A VOWEL!!!\n");
            break;
        }
    }//end switch

    return 0;

}// end main