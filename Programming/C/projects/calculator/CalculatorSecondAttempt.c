#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float num1;
    float num2;
    float result;
    char operator;

    printf("Enter Equation");

    /* so in a maths problem e.g 1 + 1, 1 comes first, then operator second, then num2. 
    You list this with delimiters first then with the variables.*/
    scanf("%f %c %f", &num1, &operator, &num2);

    switch(operator){
        case '/': result = num1 / num2;
        break;
        case '*': result = num1 * num2;
        break;
        case '+': result = num1 + num2;
        break;
        case '-': result = num1 - num2;
        break;

        default: goto fail;
    }

    printf("%f", result);

    fail:
    printf("invalid");

    exit:
    return 0;

}