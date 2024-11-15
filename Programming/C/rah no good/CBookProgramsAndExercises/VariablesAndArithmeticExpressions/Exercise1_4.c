/*
    Exercise 1.4: Write a program like in exercise 1.3 but with celsuis being converted to fahrenheit.
*/
#include <stdio.h>

/*
    print fahrenheit-celsius table 
    for fahr = 0, 20 .... 300
*/

int main(){
    int fahr, celsuis;
    int lower, upper, step;

    lower = 0; //lower limit of temp
    upper = 300; //upper limit of temp
    step = 20; //step size

    printf("Ultimate Conversion Program\n");
    printf("__________________________\n");

    celsuis = lower;
    while (celsuis <= upper){
        fahr = (2 * celsuis) - 30;
        printf("|\t%d >> %d \t|\n", celsuis, fahr);
        celsuis = celsuis + step;
    }

    printf("|_______________________|");

    return 0;
}