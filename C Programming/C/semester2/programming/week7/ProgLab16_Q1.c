/*
    Program Descriptor: A C program that takes a string from standard input and uses seperate functions to:
                        1. Count the number of times a vowel occurs in the sentence.
                        2. Find the number of characters in the string you entered (use a string function)
                        3. Concatenate the string you entered to the end of the following string and display the new string:
                            char sentence[40] = "I entered the string"

    Author: Aleksy zopinski

    Date: 11/03/2025
*/
//Header Files
#include <stdio.h>
#include <string.h>

//Symbolic Names
#define SIZE 40

//Function Signatures
int myvowelnum(char *s);
void myreverse(char string[SIZE]);
void mycat(char string[SIZE],char sentence[SIZE]);

//Main 
int main()
{
    char string[SIZE] = {};
    char sentence[SIZE] = {"I entered the string "};
    int numberofvowels = 0;

    //prompt and gather user input
    printf("Enter a string\n");
    fgets(string,SIZE,stdin);

    //remove newline character
    string[strlen(string) - 1] = '\0';

    //get number of vowels
    numberofvowels = myvowelnum(string);

    printf("The number of vowels in this string equals to %d", numberofvowels);

    //add space between outputs
    printf("\n\n");

    //display string in reverse
    myreverse(string);

    //display string concatenated
    mycat(string,sentence);

    return 0;

}

//Function Definitions

//function to get number of vowels in string
int myvowelnum(char *s)
{
    int vowelnum = 0;
    while(*s != '\0')
    {
        if(*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u')
        {
            vowelnum++;
        }
        s++;
    }

    return vowelnum;
}

//function to find number of characters in string and display the string in reverse
void myreverse(char string[SIZE])
{
    int charnum = 0;
    int i = 0;
    //get number of characters
    /*while(string[i] != '\0')
    {
        charnum++;
        i++;
    }*/
   charnum = strlen(string);

    printf("\nNum of chars: %d\n\n", charnum);

    //display string in reverse
    do
    {
        printf("%c", string[charnum - 1]);
        charnum--;
    } while (charnum != 0);
}

//function to cat string onto the end of the other string
void mycat(char string[SIZE],char sentence[SIZE])
{
    strcat(sentence,string);
    printf("\n\n%s", sentence);
}