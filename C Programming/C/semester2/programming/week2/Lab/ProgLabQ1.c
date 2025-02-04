/*
    Program Descriptor: Write a program that uses a function to print 10 stars (*) on a single line. Ensure you
                        declare your function prototype and include adequate comments.

    Author: Aleksy Szopinski

    Date:04/02/2025
*/
#include <stdio.h>

#define NUM 10

//function signature
void stars(void); 

int main()
{
    printf("\nBefore Function...\n");

    stars();

    printf("\nAfter Function...\n");

    return 0;
}//end main()

void stars(void)
{
    for(int i = 0; i < NUM; i++)
    {
        printf("*");
    }
}//end stars()