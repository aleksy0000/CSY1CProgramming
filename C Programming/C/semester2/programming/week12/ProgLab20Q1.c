/*
    Program Descriptor: Write a C program to display the lines of a text file along with the line numbers. The
                        first line should be proceeded by 1., the second by 2., etc., for each line in the text file.

    Author: Aleksy Szopinski

    Date: 29/04/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names

//struct templates

//Function Signatures


//Main 
int main()
{
    int numberOfLines = 0;
    char char_in;
    FILE *fp;

    fp = fopen("text.txt","r");

    if(fp == NULL)
    {
        printf("\nOpening File Failed...\n");

        return 1;
    }
    else
    {
        printf("\nFile Opened Succesfully...\n");
    }

    while(char_in = fgetc(fp)!=EOF)
    {
        
        numberOfLines++;
    }

    printf("\n%d lines are inside the file\n",numberOfLines);

    return 0;

}

//Function Definitions