/*

*/
#include <stdio.h>

//copy input to output; 1st version
int main()
{
    int c;

    c = getchar();
    while (c != EOF) //to activate EOF in the terminal do CTRL + Z
    {
        putchar(c);
        c = getchar();
    }
}