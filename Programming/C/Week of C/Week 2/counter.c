#include <stdio.h>

int main()
{
    // int counter; with no value assigned the compiler will return random data
    int counter = 90;
    int output;

    while (counter < 1000000){
    printf("this tutorial boring as hell\n");
    output = counter++;
    }

    return 0;

}