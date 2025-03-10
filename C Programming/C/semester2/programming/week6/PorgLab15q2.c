/*
    Program Descriptor: Read a sentence from stdin and use
                        seperate functions to calculate the number of chars
                        and append the sentence to the end of the following string
                        "My sentence is:"

    Author: Aleksy Szopinski

    Date: 04/03/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define SIZE 50

//Function Signatures


//Main 
int main()
{
    char sentence[SIZE];
    char mysentence[SIZE] = "My sentence is:";

    printf("Enter Sentence:\n");
    scanf("%s", sentence);

    printf("%s", sentence);

    return 0;
}

//Function Definitions