/*
    Program Descriptor: Write a program that uses 2 functions called sum() and average(). Your program must
                        ask the user to enter 3 numbers inside the main(). Your main() should then pass these
                        3 values as parameters to the function sum(). This function should calculate the sum
                        of the 3 numbers. Your function sum() should then pass the sum of the 3 numbers as a
                        parameter to the function average(). The function average() should then calculate the
                        average of the 3 numbers and display this on the screen.

    Author: Aleksy Szopinski

    Date: 04/02/2025
*/
//Libraries:
#include <stdio.h>

//Symbolic Names:
#define NUMOFNUM 3

//Function signatures:
void sum(int, int, int);
void average(int);

//Program start:
int main()
{
    //variable declarations:
    int num1, num2, num3;

    //prompt and gather user input:
    printf("\n\nPlease enter 3 numbers\n\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    //Calculate the sum and average:

    printf("\n\nBEFORE FUNCTIONS:\n\n");

    sum(num1, num2, num3);

    printf("\n\nAFTER FUNCTIONS:\n\n");

    return 0;
}//end main()

//find sum:
void sum(int num1, int num2, int num3)
{
    int sum = num1 + num2 + num3;

    printf("\n%d + %d + %d = %d\n", num1, num2, num3, sum);
    
    average(sum);
}//end sum()

//find average:
void average(int sum)
{
    float average = sum / NUMOFNUM;

    printf("\nAverage = %.2f\n", average);

}//end average()