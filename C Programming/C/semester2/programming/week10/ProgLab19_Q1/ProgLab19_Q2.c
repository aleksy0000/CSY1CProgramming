/*
    Program Descriptor: Remove Blank Lines from textfile

    Author: Aleksy Szopinski

    Date: 01/04/2025
*/
//Header Files
#include <stdio.h>

//Main 
int main()
{
    //variables:
    FILE *fp1;
    FILE *fp2;
    char ch;
    //program start:
    fp1 = fopen("text3.txt","r");
    fp2 = fopen("text4.txt","w");
    
    if(fp1 == NULL || fp2 == NULL)
    {
        printf("Couldn't open file");

        return 1;
    }
    else
    {
        while((ch = fgetc(fp1))!=EOF)
        {
            if(ch != '\n')
            {
                fputc(ch,fp2);
            }
        }
    }
}

//Function Definitions