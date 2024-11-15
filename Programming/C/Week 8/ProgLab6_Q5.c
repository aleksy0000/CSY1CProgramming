/*
    Program Descriptor: Write a program that uses a char array with 5 elements. Enter any 5 characters of your
                        choice into the array. Output the contents of the array to the screen and display each
                        character.

                        Note: Does your program allow any white-space character to be entered? If yes, can
                        you modify your code to prevent a white-space character be entered?
*/
#include <stdio.h>

#define CHARS 5

int main()
{
    char c[CHARS];
    int i;

    printf("Enter 5 Characters\n\n");
    for(i = 0; i < CHARS; i++)
    {
        scanf(" %c", &c[i]);
        printf("\n");
        printf("you have entered %c\n", c[i]);
    }

    return 0;
}