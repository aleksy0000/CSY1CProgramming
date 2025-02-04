#include <stdio.h>

int main()
{
    int var1 = 0;
    int var2 = 0;
    int sum = 0;


    printf("Enter first number\n");
    scanf("%d", &var1);

    printf("Enter second number\n");
    scanf("%d", &var2);

    //get the sum of the numbers entered
    sum = var1 + var2;

    printf("Sum of var 1 and var 2 is %d", sum);

    return 0;
}