/*
    playing around with the code
*/

#include <stdio.h>

int main()
{
    float var1;
    int var2;
    float sum;

    printf("Enter an uneven number");
    scanf("%f", &var1);

    
    printf("Enter an uneven number");
    scanf("%d", &var2);

    sum = var1 * var2;

    printf("you entered %.2f", sum);

}