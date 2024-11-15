/*
    Program that prints fahrenheit temparatures and their celsius equivalents
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

    fahr = lower;
    while (fahr <= upper){
        celsuis = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsuis);
        fahr = fahr + step;
    }
}