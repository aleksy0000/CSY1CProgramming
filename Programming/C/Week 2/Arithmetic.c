/*
    Program Description: This program allows for arithmetic operations

    Author:

    Date:

*/

#include <stdio.h>

int main()
{ //any code inside the curly braces is called a main block
    int var1;
    int var2;

    var1 = 0;
    var2 = 10;


    //the first %d is replaced by var1, the second %d is replaced by var2;
    printf("var 1 contains %d, var 2 contains %d\n", var1, var2);

    //whats on the right goes into the left, var1 + 10 goes into var2
    var2 = var1 + 10;
    printf("var 1 contains %d, var 2 contains %d\n", var1, var2);

    //contents of var 2 multiplied by 3 goes into var1
    var1 = var2 * 3;
    printf("var 1 contains %d, var 2 contains %d\n", var1, var2);

    //contents of var1 subtracted by 1 goes into var2
    var2 = var1 - 1;
    printf("var 1 contains %d, var 2 contains %d\n", var1, var2);

    //contents of var1 divided by 5 goes into var2
    var2 = var1 / 5;

    printf("var 1 contains %d, var 2 contains %d\n", var1, var2);

    //contents of var1 divided by 20 with the remainder going into var2
    var2 = var1 % 20;
    printf("var 1 contains %d, var 2 contains %d\n", var1, var2);




    return 0;

}