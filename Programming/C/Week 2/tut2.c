#include <stdio.h>

int main(){

    int var1 = 10;
    float var2 = 4;
    float var3;

    //var3 = var1/var2; this is called a mixed expression, 2 different data types float and int.

    //you can add (float) before var1 to cast a float on the int. which makes the int a float for this operation.
    var3 = (float)var1 / var2; 
    printf("var3 has a value of %f", var3);

    return 0;
}