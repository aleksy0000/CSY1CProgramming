/*
    Descripter: example of symbolic constants

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/
#include <stdio.h>

/*
    The quantities LOWER, UPPER, and STEP are symbolic constants, not variables, so they do not appear in declarations.
    Symbolic constant names are conventially written in upper case so they can be readily distinguished for lower case variable names. 
    Notice that there is no semicolon at the end of a #define line.
*/
#define LOWER 0 //lower limit of table
#define UPPER 300 // upper limit
#define STEP 20 //step/increment size

//print fahr - celsius table
int main()
{
    int fahr;

    for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    {
        printf("%3d %6.1f\n", fahr, (fahr - 32)*(5.0/9.0));
    }

    return 0;
}