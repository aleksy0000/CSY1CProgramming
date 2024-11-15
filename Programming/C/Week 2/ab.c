#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    a = 57;
    b = 79;
    
    a = c;
    b = a;
    a = b;

    printf("A contains %d, B contains %d", &a, &b);


}