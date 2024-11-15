#include <stdio.h>

//copy input to output; 2nd version
int main()
{
    int c;

    while((c = getchar()) != EOF);//to activate EOF in the terminal do CTRL + Z
    {
        putchar(c);
    }
    
    return 0;
}