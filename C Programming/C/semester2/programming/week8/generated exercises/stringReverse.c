/*
    Program Descriptor: Reverse a string

    Author:Aleksy Szopinski

    Date: 18/03/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define LENGTH 20

//struct templates

//Function Signatures
void revStr(char *s, int size);

//Main 
int main()
{
    char string[LENGTH] = {"hello"};

    revStr(string, sizeof(string));
}

//Function Definitions
void revStr(char *s, int size)
{
    for(int i = size; i >= 0;i--)
    {
        printf("%c",*(s + i));
    }
}