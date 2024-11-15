/*
    Descriptor: Everything i've learnt so far implemented into a calculator program. (Week 3, Version 2)

    Author: Aleksy Szopinski

    Date: 01/10/2024.

    conclusion: The calculator part works fine, I was trying to make it so that 
    the user can keep entering math problems until they type N. I was unsuccusful in doing that.
*/
#include <stdio.h>

    float num1;
    float num2;
    float ans;
    char oper;
    char YN;

int main()
{
    printf("Do you wish to enter a maths problem. Enter Y/N\n");
    scanf(" %c", &YN);

    if(YN == 'Y')
    {
        maths:
        printf("please enter maths problem,\n");
        scanf("%f %c %f", &num1, &oper, &num2);

        switch(oper)
        {
            case '+': ans = num1 + num2;
            break;

            case'-': ans = num1 - num2;
            break;

            case'*':
            case'x':
            case'X':
            {
                ans = num1 * num2;
                break;
            }
            
            case'/':
            {
                if(num2 == 0)
                {
                    printf("cannot divide by 0");
                }
                else
                {
                    ans = num1 / num2;
                }
                break;
            }

            case'%': ans = (int)num1 % (int)num2;
            break;
            
        }
        printf("%.2f %c %.2f = %.2f\n", num1, oper, num2, ans);
    }
    while (YN == 'Y');  // Loop until user decides not to continue
    
    return 0;

}
