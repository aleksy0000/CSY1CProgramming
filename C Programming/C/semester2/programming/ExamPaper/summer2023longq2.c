/*
    Write a C program that asks the user to enter a string using standard input (the 
    maximum characters allowed is 20). Your program should check if the string is a 
    palindrome. A palindrome is any string that is spelled the same way backwards, e.g., 
    “radar”, “kayak”, “rats live on no evil star”.
    
    If the string is a palindrome, display the word “yes” to standard output, otherwise 
    display “no”.

    No validation (error-checking) is required
*/
#include <stdio.h>
#include <string.h>

#define LENGTH 20
#define BIGLENGTH 50

int main()
{
    char inputString[LENGTH];
    char stringLiteral[BIGLENGTH] = "You Entered:"; 
    int stringLength;
    int palindrome = 0;

    printf("Enter String:\n");
    fgets(inputString,LENGTH,stdin);
    inputString[strlen(inputString) - 1] = '\0';

    stringLength = strlen(inputString) - 1;

    for(int i = 0;i < stringLength / 2; i++)
    {
        if(inputString[i] == inputString[stringLength - i])
        {
            palindrome = 1;
        }//end if
        else
        {
            palindrome = 0;
        }//end else
    }//end for

    if(palindrome == 1)
    {
        printf("\nyes\n");
    }
    else
    {
        printf("\nno\n");
    }

    //Show how you would modify your program in part (a) to concatenate your string to the following string literal: "You Entered"
    strcat(stringLiteral,inputString);

    printf("\n%s\n",stringLiteral);
    

    return 0;//end program

}//end main