//Calculator from github in C
/*This simply works by taking three user inputs grouped into one scanf() function.
 These are seperated into valueOne, valueTwo and the operator (choice of *,/,+,-,^). 
 A switch statement is then used in order to run the right calculation for the given operator. 
Mess around with the code and change bits here and there.*/


//header files
#include <stdio.h> //standard input/output
#include <stdlib.h>//declares various utility functions for type conversions, mem allocation, algorithms and etc.
#include <string.h>//adds the string variable type
#include <math.h>//adds basic math operations

int main(int argc, char *argv[])/*int argc counts the number of arguments
provided through command line arguments and char*argv is a 
2 dimensional array of real arguments provided through command line.
(Arguments are the values declared within a function, the command line is the user input)*/
{
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    printf("Enter Calculation :\n\n");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    switch(operator)/*The switch statement is a way to make decisions
    based on the value of a variable. its a clean alternative to
    if statements when you have multiple possible values to check.
    
    (operator) is the declared switch variable that we want to evaluate
    
    inside the curly brackets of the switch function you define multiple case statements,
    each representing a possible value, if the value matches one of the cases that is the
    selected output
    
    so we have here multiple cases of what can be inputted into a simple calculator
    */
    {
        case '/': answer = valueOne/valueTwo;

        break;/*After each case, you typically use a break statement to exit the switch.
        without the break, the program will continue to execute the other cases. this is called
        "fall through"*/
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
        default: goto fail; /*he default case acts as an "else" statement,
        if the value doesn't match any case it will choose the default case to proceed.
        
        in this case, this code calls the fail function*/ 
     }
    printf("%.9g%c%.9g =  %.6g\n\n",valueOne,operator, valueTwo, answer);
     goto exit;
    fail:
    printf("Fail.\n");
    exit:
    return 0;
}