/*
    Exercise 1.3: Modify the temparature conversion program to print a heading above the table.
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

    fahr = lower;
    while (fahr <= upper){
        celsuis = 5 * (fahr-32) / 9;
        printf("|\t%d >> %d \t|\n", fahr, celsuis);
        fahr = fahr + step;
    }

    printf("|_______________________|");

    return 0;
}