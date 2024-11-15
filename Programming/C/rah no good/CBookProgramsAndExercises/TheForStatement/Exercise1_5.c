/*
    Descriptor: Modify the temparature conversion program to print the table in reverse order.

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/
#include <stdio.h>

int main()
{
    int fahr;
    char f = 'f';
    char c = 'c';

    printf("%3c\t%3c\n", f, c);
    //initialization: fahr = 300;
    //condition: fahr >= 0;
    //increment: fahr = fahr - 20
    for(fahr = 300; fahr >= 0; fahr = fahr - 20)
    {
        printf("%3.2d\t%6.2f\n", fahr, (fahr - 32)*(5.0/9.0));
    }//end for
}//end main