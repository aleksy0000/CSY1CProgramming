/*
    Program Descriptor: Given the array definition whats wrong with the following statments,
                        (a) puts(name) //There is no NULL in the array! so the output is funky!!
                        (b) scanf("%s", &name); //there is no need for the ampersand with arrays its implied
                        (c) strcpy(name,"Philip"); //I dont know!!
                        (d) *(name+5)='a';
                        (e) name = "Philip";

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
    char name[] = {'R','o','b','e','r','t'};

    scanf("%s", &name);

    strcpy(name,"Philip");


    puts(name);
}

//Function Definitions