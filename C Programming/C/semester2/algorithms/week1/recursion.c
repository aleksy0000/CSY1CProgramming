#include <stdio.h>

int factorial(int);

int main(){

    int n;
    int fact;

    printf("enter number to be factorialed");
    scanf("%d", &n);

    fact = factorial(n);

    printf("the factorial of %d is %d", n, fact);

    return 0;

}//end main()

int factorial(int x)
{
    if(x == 1 || x == 0)
    {
        return(factorial);
    }
    else
    {
        return(x*factorial(x-1));
    }
}