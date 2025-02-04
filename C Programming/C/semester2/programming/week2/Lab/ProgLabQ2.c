/*
    Program Descriptor: Write a program that uses a function with 2 parameters (a character and an integer,
                        e.g., function_name(char, int). Your function must display the character parameter a
                        certain number of times on one line where this number is the integer parameter. For
                        example, if your function is function_name(*,5) it will display
                        *****

    Author: Aleksy Szopinski

    Date: 04/02/2025
*/
#include <stdio.h>

//#define NUM 5

void printchar(char, int);//function signature

int main()
{
    //variable declarations:
    char character;
    int num;

    //get character from user:
    printf("\n\nWhat character would you like to print?\n\n");
    scanf("%c", &character);

    //get number of characters from user:
    printf("\n\nHow many times would you like it to be printed?\n\n");
    scanf("%d", &num);

    printf("\n\nPrinting...\n\n");

    printchar(character, num);

    printf("\n\nPrinted!");

    return 0;

}//end main;

void printchar(char character, int num)
{
    for(int i = 0; i < num; i++)
    {
        printf("%c", character);
    }//end for
}//end printchar()