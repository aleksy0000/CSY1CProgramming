/*
    Descriptor: Program that demonstrates the modulus operator displaying
    the remainder of a few arithmetic operations.

    Author: Aleksy Szopinski.

    Date: 01/10/2024.
*/

#include <stdio.h>

int main()
{
    int mod;

    printf("2 modulus 2\n");
    mod = 2 % 2;
    printf("the modulus = %d\n\n", mod);

    printf("3 modulus 2\n");
    mod = 3 % 2;
    printf("the modulus = %d\n\n", mod);

    printf("5 modulus 2\n");
    mod = 5 % 2;
    printf("the modulus = %d\n\n", mod);

    printf("7 modulus 3\n");
    mod = 7 % 3;
    printf("the modulus = %d\n\n", mod);

    printf("100 modulus 33\n");
    mod = 100 % 33;
    printf("the modulus = %d\n\n", mod);

    printf("100 modulus 7\n");
    mod = 100 % 7;
    printf("the modulus = %d\n\n", mod);






    return 0;
}