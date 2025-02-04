#include <stdio.h>

int main()
{
    int var1;
    int var2;
    int var3;
    int var4;

    var1 = var2 = 1; //assigns 1 to var1 and var2 in 1 line

    //this is a POST-increment
    var3 = var1++; //Post-increments apply the increment AFTER assignment operations so var3 = 1.

    //this is a PRE-increment
    var4 = ++var1; //Pre-incrments apply the increment BEFORE assignment operations so var4 = 2.

    /*
        if you applied the increment before the assignment operation, the compiler will follow procedurally so it will apply the increment
        before assignment operation
        i.e., 
        var1++;
        var3 = var1;

        var3 contains 1
    */

    printf("var1 contains %d, var3 contains %d\n", var1, var2);
    printf("var3 contains %d, var4 contains %d\n", var3, var4);

    return 0;
}