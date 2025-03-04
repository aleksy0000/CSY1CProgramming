/*
    Program Descriptor: Printing strings

    Author: Aleksy Szopinski

    Date: 25/02/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names

//Function Signatures

//Main 
int main()
{
    //creates 5 spaces and fits string inside:
    printf("\n%5s\n", "abcd");

    //creates 5 spaces but since string is larger than that
    //it prints the whole string anyway.
    printf("\n%5s\n", "abcdef");

    //formatted to the left side
    printf("\n%-5s\n", "abc");

    //creates 5 spaces but limits string to 2 characters
    //formatted to the right side
    printf("\n%5.2s\n", "abcde");

    //creates 5 spaces but limits string to 2 characters
    //formatted to the left side
    printf("\n%-5.2s\n", "abcde");

    return 0;
}//end main()

//Function Definitions