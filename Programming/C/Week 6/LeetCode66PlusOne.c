/*
    //let's say the digits in the array are 4, 3, 2, 1
    //They represent the integer 4321
    //We must return the integer returned by 1
    //we can loop this solution: 
    //4 * 10 = 40 + 3 = 43 * 10 = 430 + 2 = 432 * 10 = 4320 + 1 = 4321 (loop over)
    //4321 + 1 = result
*/
#include <stdio.h>

int main()
{
    int i;
    int result;
    int digits[4];

    digits[0] = 4;
    digits[1] = 3;
    digits[2] = 2;
    digits[3] = 3;

    result = digits[0] * 10;
    //printf("%d", result);

    for(i = 1; i < 4; i++)
    {
        
        result = result + digits[i];
        if(i < 4 - 1)
        {
            result = result * 10;
        }
        if(i == 4 - 1)
        {
            break;
        }
    }

    result = result++;
    printf("%d", result);
}