#include <stdio.h>

int main()
{
    //Declaration
    int var1;
    int var2;
    char my_char;

    //initialization
    var1 = 1;
    var2 = 2;
    my_char = 'a';

    /*
        (var1 = var1 + 1) == (var1++)
    */

    printf("var1 contains %d, var2 contains %d\n", var1, var2);
    //var1 = var1 + 1 
    var1++; //this always increments the value of the variable by 1, never 2 never 3 never anything else.
    printf("var1 contains %d, var2 contains %d\n", var1, var2);

    /*
        (var2 = var2 - 1) == (var2--)
    */
    
    //var2 = var2 - 1
    var2--;
    printf("var1 contains %d, var2 contains %d\n", var1, var2);

    //compilers only check for syntax errors, they dont check semantic errors.

    /*
    Redundant Code: 

        var1 = var1 * 1

        var1 = var1 / 1
    */

   //every key on the keyboard has an associated value to it, called ASCII code.
   my_char++;
}