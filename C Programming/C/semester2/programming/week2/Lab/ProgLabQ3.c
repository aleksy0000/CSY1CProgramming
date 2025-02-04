/*
    Program Descriptor: Write a program that uses a function to find the highest and lowest number of 3
                        values. These 3 values must be passed as parameters to the function, i.e.,
                        function_name(int, int, int). Your function should find these values and display
                        messages stating:
                        The Highest value is x
                        The Lowest value is y
*/
#include <stdio.h>

#define SIZE 3

void findminmax(int, int, int);

int main()
{
    int num1;
    int num2;
    int num3;

    printf("\n\nEnter 3 numbers\n\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    printf("\n\nBefore Function...\n\n");

    findminmax(num1, num2, num3);

    printf("\n\nAfter Function...\n\n");

    return 0;   
}//end main()

void findminmax(int num1, int num2, int num3)
{
    int nums[SIZE] = {num1, num2, num3};
    int min = nums[0];
    int max = nums[0];

    //find min
    for(int i = 0; i < SIZE; i++)
    {
        if(nums[i] < min)
        {
            min = nums[i];
        }
    }

    printf("\n\nMIN = %d\n\n", min);

    //find max
    for(int i = 0; i < SIZE; i++)
    {
        if(nums[i] > max)
        {
            max = nums[i];
        }
    }

    printf("\n\nMAX = %d\n\n", max);
}//end findminmax