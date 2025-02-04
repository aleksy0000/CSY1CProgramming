/*
    Descriptor: Q7 from C book, Write a program to input a number 1 to 7 from the keyboard, where 1 represents sunday
    2 monday, 3 tuesday etc. Display the day of the week corresponding to the number typed by the user.
    If the user types a number outside the range 1 to 7 display an error message.

    Author: Aleksy Szopinski

    Date: 15/10/2024
*/
#include <stdio.h>

int main()
{
    int day;

    printf("What day is it?\n");
    printf("1 - Sunday \n 2 - Monday \n 3 - Tuesday \n 4 - Wednesday \n 5 - Thursday \n 6 - Friday \n 7 - Saturday \n");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
        {
            printf("Today is SUNDAY");
            break;
        }
        case 2:
        {
            printf("Today is MONDAY");
            break;
        }
        case 3:
        {
            printf("Today is TUESDAY");
            break;
        }
        case 4:
        {
            printf("Today is WEDNESDAY");
            break;
        }
        case 5:
        {
            printf("Today is THURSDAY");
            break;
        }
        case 6:
        {
            printf("Today is FRIDAY");
            break;
        }
        case 7:
        {
            printf("Today is SATURDAY");
            break;
        }
        default:
        {
            printf("this is not a day");
            break;
        }
    }// end switch
    return 0;
}//end main