/*
    Descriptor: Write a program using a while loop to display the numbers 1 - 10 in descending order
                on the same line and each number separated by a comma e.g., 10,9,8,7,6,5,4,3,2,1 (no comma at end)

    Author: Aleksy Szopinski

    Date: 22/10/2024
*/
#include <stdio.h>

int main()
{
    int num = 10;

    while(num > 0)
    {
        printf("%d\n", num);
        num = num - 1;
    }
    return 0;
}//end main()