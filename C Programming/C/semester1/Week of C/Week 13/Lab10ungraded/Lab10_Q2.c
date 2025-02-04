/*
    Program Descriptor: (i) Write a program that uses DMA to allocate memory for 5 floating-point numbers.
                            You can use either malloc() or calloc().
                        (ii) After memory has been allocated for the 5 float numbers, enter these numbers into
                            the memory block.
                        (iii) Calculate and display the average of the numbers stored in the memory block.
    Author: Aleksy Szopinski

    Date: 09/12/2024
*/
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main()
{
    //variables
    float *numbers;
    float total;
    float avg;
    int i;
    
    numbers = calloc(SIZE, sizeof(float));


    //input values and sum into total
    printf("Input the values\n");
    for(i = 0; i < SIZE; i++)
    {
        scanf("%f", &*(numbers + i));
        total = total + *(numbers + i);
    }//end for

    avg = total / SIZE;

    printf("The average is %f", avg);

    return 0;//terminate program
}//end main()