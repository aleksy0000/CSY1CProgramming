/*
    Descriptor: This program will count characters
    in an input, 2nd version.

    Author: Aleksy Szopinski

    Date 09/10/2024.
*/
#include <stdio.h>

int main()
{
    double nc; //changed from long to double
    nc = 0;
    while (getchar() != EOF) //to activate EOF in the terminal do CTRL + Z
    {
        ++nc;
    }

    printf("%.0f\n", nc);
}