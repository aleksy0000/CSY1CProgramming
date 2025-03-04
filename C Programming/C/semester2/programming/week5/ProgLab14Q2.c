/*
    Program Descriptor: Write a program to read in your name and display with a space between each letter,
                        for example, John gets displayed as J o h n.

    Author: Aleksy Szopinski

    Date: 25/02/2025
*/
//Header Files
#include <stdio.h>
#include <string.h>

//Symbolic Names
#define SIZE 50

//Function Signatures


//Main 
int main()
{
    //array initialised with NULL characters
    char name[SIZE] ={'\0'};

    //get name
    fgets(name, sizeof(name), stdin);

    //print each character of name with a space in between
    for(int i = 0;i < SIZE;i++)
    {
        printf("%c ", name[i]);

        //break loop at NULL character.
        if(name[i] == '\0')
        {
            break;
        }
    }

    return 0;//end program

}//end main

//Function Definitions