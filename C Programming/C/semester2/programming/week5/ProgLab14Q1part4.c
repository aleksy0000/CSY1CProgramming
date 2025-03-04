/*
    Program Descriptor: evaluating output of two program segments

    Author: Aleksy Szopinski

    Date: 25/02/2025
*/
//Header Files
#include <stdio.h>
#include <string.h>

//Symbolic Names


//Function Signatures


//Main 
int main()
{
    //(A)
    //This prints the whole string.
    char *p = "abcd";
    while(*p)
    {
        putchar(*p++);
        putchar("\t");
    }

    //(B)
    // prints the string character by character in reverse order.
    /*char *text = "abcd";
    char *p = text;
    p += strlen(p)-1;
    while(text<=p)
    {
        puts(p--);
    }*/

}

//Function Definitions