/*
    If statements and all that.
*/

#include <stdio.h>

int main()
{
    float bank_balance = 0;

    printf("Enter a bank balance\n");
    scanf("%f", &bank_balance);

    //if the bank balance is greater than zero
    if(bank_balance > 0)
    {
        printf("\n you have money");
    };

    //if the bank_balance is less than or equal to zero
    if(bank_balance <= 0)
    {
        printf("You have no money");
    }

    return 0;
}