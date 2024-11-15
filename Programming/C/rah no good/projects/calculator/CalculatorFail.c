//Calculator Project (Doesn't work)

#include <stdio.h>
//missing:
//#include <stdlib.h>
//#include <string.h>
//#include <math.h>

int main(){

    int Num1;
    int Num2;
    int Result;

    char C; //Choose Operator

    char P; //Plus
    char S; //Subtract
    char D; //Divide
    char X; //Multiply

    /*mistake: I should have used the pre-existing maths functions for the operators
    instead of making variables for them*/


    /*I didn't need all this stuff, i could have simply asked for the 2 numbers and the operator in 1 input
    printf("Enter Calculation :\n\n");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo); 
    */
    printf("Please choose operator\n");

    scanf("%c", &C);

    /*instead of an if statement I need a switch(operator statement)
    switch(operator)
    {
        case '/': answer = valueOne/valueTwo;

        break;
        case '*': answer = valueOne*valueTwo;

        break;
        case '+': answer = valueOne+valueTwo;

        break;
        case '-': answer = valueOne-valueTwo;

        break;
        case '^': answer = pow(valueOne,valueTwo);

        break;
        case ' ': answer = sqrt(valueTwo);
        
        break;
        default: goto fail; 
     }
     */

    if(C = P){
        
        printf("Enter the first number you'd like to add");

        scanf("%d", &Num1);

        printf("Enter the Second number you'd like to add");

        scanf("%d", &Num2);

        int Result = Num1 + Num2;

        printf("%d", Result);
    };

    return 0;

    /*printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
     goto exit;
    fail:
    printf("Fail.\n");
    exit:
    return 0;*/
}

//working code
/*//Calculator from github in C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter Calculation :\n\n");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    switch(operator)
    {
        case '/': answer = valueOne/valueTwo;

        break;
        case '*': answer = valueOne*valueTwo;

        break;
        case '+': answer = valueOne+valueTwo;

        break;
        case '-': answer = valueOne-valueTwo;

        break;
        case '^': answer = pow(valueOne,valueTwo);

        break;
        case ' ': answer = sqrt(valueTwo);
        
        break;
        default: goto fail; 
     }
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
     goto exit;
    fail:
    printf("Fail.\n");
    exit:
    return 0;
}*/