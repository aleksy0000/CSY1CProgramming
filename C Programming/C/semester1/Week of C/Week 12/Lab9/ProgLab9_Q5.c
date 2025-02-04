/*
    Program Descriptor: MANDATORY QUESTION, Using pointer notation only, write a program that uses 2 floating-point arrays with 3
                        elements in each. Enter values into the 1st array. Copy the contents of this array into
                        the 2nd array. Display the contents of both arrays.

    Author: Aleksy Szopinski

    Date: 03/12/2024
*/
#include <stdio.h>

#define NUMS 3

int main()
{
    //variables:
    float arr1[NUMS];
    float arr2[NUMS];
    int i;

    //prompt and gather input for arr1:
    printf("Please enter array 1 elements:\n");
    for(i = 0; i < NUMS; i++)
    {
        scanf("%f", &*(arr1 + i));
    }//end for

    //display contents of array before copy:
    printf("\nArray 1 / Array 2 before copy...\n");
    printf("\n|\tARRAY 1\t|\tARRAY 2\t|\n");
    for(i = 0;i < NUMS; i++)
    {
        printf("|\t%7.2f\t|\t%7.2f\t|\n", *(arr1 + i), *(arr2 + i));
    }//end for

    //copy arr1 into arr2:
    printf("\nCopying array 1 into array 2...\n");
    for(i = 0;i < NUMS; i++)
    {
        *(arr2 + i) = *(arr1 + i);
    }//end for

    //display contents of both arrays after copy:
    printf("\n|\tARRAY 1\t|\tARRAY 2\t|\n");
    for(i = 0;i < NUMS; i++)
    {
        printf("|\t%7.2f\t|\t%7.2f\t|\n", *(arr1 + i), *(arr2 + i));
    }//end for

    return 0;//end program

}//end main()