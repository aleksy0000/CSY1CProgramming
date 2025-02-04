/*
    Descriptor: This program will count characters
    in an input, 1st version.

    Author: Aleksy Szopinski

    Date 09/10/2024.
*/
#include <stdio.h>

int main()
{
    long nc;
    nc = 0;
    while (getchar() != EOF) //to activate EOF in the terminal do CTRL + Z
    {
        ++nc;
    }

    printf("%ld\n", nc);
}