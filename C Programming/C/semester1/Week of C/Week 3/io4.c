/*
Program to demonstrate entering more than 1 data item.
*/
#include <stdio.h>

int main(void)
{
    int var = 0;
    char my_char = ' ';


    printf("Enter a single number and a single character\n");
    scanf("%d", &var);

    while(getchar() != '\n'); //this tells the OS to ignore white characters

    scanf("%c", &my_char);

    while(getchar() != '\n'); //you have to this everytime you want an input to ignore white chars

    printf("You entered %d and %c", var, my_char);

    return 0;
}