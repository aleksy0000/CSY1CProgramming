/*
    Program to demonstrate while loops
*/
#include <stdio.h>

int main()
{
    int num1 = 1;
    int total = 0;

    printf("Enter positive integer or enter 0 to end the program\n\n");
    printf("%d + ", total);

    while(num1 != 0)
    {
        scanf("%d", &num1);

        if(num1 == 0)
        {
            printf("bye ");
            break;
        }

        total = total + num1;

        printf("\n%d + ", total);
    }
    printf("total = %d", total);

    return 0;
}