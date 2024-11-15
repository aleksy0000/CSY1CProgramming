/*
Program to demonstrate entering more than 1 data item.
*/

#include<stdio.h>

int main()
{
    float var = 0;

    printf("Enter any float number");
    scanf("%f", &var);

    // display the number entered correct to 2 decimal places
    printf("You entered %.2f", var); // to reduce the output to 2 decimal places you must add %.2f instead of %f.
    // the compiler will round up the number if it is 9.999 for example, output will be 10.00

    /* if you were to type %15.2f, you tell the OS to count 15 spaces and to fit that number with 2 decimal places within those spaces */

    /* If you were to limit the spaces to a number that is smaller than the inputted number, the OS
    will simply display the full number. If the number is bigger than the spaces allowed, the OS
    will ignore the limit. The OS will OVERRIDE your instruction.*/

    return 0;
}