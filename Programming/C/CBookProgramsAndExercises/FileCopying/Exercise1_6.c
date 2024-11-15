/*
    Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1
*/
#include <stdio.h>

int main()
{
    int c;

    while((c = getchar()) != EOF);//to activate EOF in the terminal do CTRL + Z
    {
        putchar(c);
    }
    
    return 0;
}

//the EOF values 0 and 1 are invisible