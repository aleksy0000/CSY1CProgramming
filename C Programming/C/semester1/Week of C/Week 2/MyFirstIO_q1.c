/*
    Program Descriptor: Program that declares variables, assigns values to those variables and prints those variables.

    Author: Aleksy Szopinski

    Date: 24/09/2024

*/

#include <stdio.h>

int main(){
    int var1;
    float var2;
    char var3;

    var1 = 10;
    var2 = 8.21;
    var3 = 'q';
    
    printf("var1 contains %d\nvar2 contains %f\nvar3 contains %c",var1,var2,var3);

    return 0;
}