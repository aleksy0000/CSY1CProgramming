/*
    Exercise 1-8. Write a program to count blanks, tabs, and newlines.
*/
#include <stdio.h>

int main()
{
    double blanks;

    while(getchar() != EOF)
    {
        blanks++;
    }

    return 0;
}//end main