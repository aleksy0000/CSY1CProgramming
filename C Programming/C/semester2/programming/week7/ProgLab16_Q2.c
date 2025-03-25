/*
    Program Descriptor: This C program accepts string input, comapres the string with "Hello World", 
                        determines if the word i.e., substring "is" occurs in the string entered,
                        assuming there is atleast 1 occurence, is it possible to count all the occurences?
                        hint: use strstr(string, substring);

    Author: Aleksy Szopinski

    Date: 11/03/2025
*/
//Header Files
#include <stdio.h>
#include <string.h>

//Symbolic Names
#define SIZE 40

//Function Signatures
int mycompare(char [], char []);
int mysubstringcount(char *);

//Main 
int main()
{
    char inputstring[SIZE] = {};
    char cmpstring[SIZE] = "Hello World";
    int isSame = 0;
    int subCount = 0;

    //prompt and get input
    printf("\nEnter String:\n");
    fgets(inputstring,SIZE,stdin);

    //remove \n character
    inputstring[strlen(inputstring) - 1] = '\0';

    //compare string with hello world and print if identical or otherwise
    isSame = mycompare(inputstring,cmpstring);

    if(isSame == 0)
    {
        printf("\nStrings are identical\n");
    }
    else
    {
        printf("\nString are different\n");
    }

    //return number of occurences of string "is" to subCount and display.
    subCount = mysubstringcount(inputstring);

    printf("\nNumber of substring occurences = %d", subCount);
}

//Function Definitions
//compare strings
int mycompare(char inputstring[], char cmpstring[])
{
    int isSame = 1;//variable to hold the return value, defaulted at string are not identical

    isSame = strcmp(inputstring,cmpstring); //function to compare the string

    return isSame;//returns 0 if string is identical, returns 1 if they are not.
}

//count the occurences of substring in string
int mysubstringcount(char *p)
{
    char substring[] = "is";
    int substringcount = 0;

    //compare the inputted string with the substring "is", when the substring is found the pointer to that point in the string is returned.
    //The pointer is then incremented past that occurence, so that the next occurence can be found.
    while((p=strstr(p,substring)) != NULL)
    {
        substringcount++;
        //printf("\nSubstringcount has been incremented");
        p++;
        //printf("\nPointer has been incremented.");
    }

    return substringcount;  

}