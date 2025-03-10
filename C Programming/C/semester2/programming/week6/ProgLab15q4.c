/*
    Program Descriptor: Make a program that compares to inputted strings then Use seperate functions to:
                        a) concatenate the first word entered to the end of the string "First word entered is". 
                            Display this entire string on the screen.
                        b) Calculate the length of the string in part(a) above and display the number of characters used.

    Author: Aleksy Szopinski

    Date: 04/03/2025
*/
//Header Files
#include <stdio.h>
#include <string.h>

//symbolic names
#define SIZE 50

int main()
{
    char sentence[SIZE] = "First Word Entered Is: "; //we will append the first word to this
    char inputword1[SIZE]; //this will hold the user input 1
    char inputword2[SIZE]; //this will hold the user input 2

    //get input 1 from user
    printf("Enter string 1:\n");
    fgets(inputword1,SIZE,stdin);

    //get input 2 from user
    printf("Enter string 2:\n");
    fgets(inputword2,SIZE,stdin);

    if(strcmp(inputword1,inputword2)==0)
    {
        printf("\nThese words are identical!\n");
    }
    else
    {
        printf("\nThese words are different\n");
    }

    //append the first word onto the string
    strcat(sentence,inputword1);

    //print out full string
    printf("\n%s\n",sentence);

    printf("\nNumber of characters in the string = %d", strlen(sentence));

    return 0;//end program
}