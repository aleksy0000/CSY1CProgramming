/*
    learning functions with parameters
*/
#include <stdio.h>

void stars(int);

int main()
{
    int no_stars = 0;

    printf("How many stars to display?\n\n");
    scanf("%d", &no_stars);

    //execute our function stars()
    stars(no_stars);

    printf("\n\nAfter function call");

    return 0;
}//end main()

//function stars() used to display a set of asterix
void stars(int num)
{
    int i;

    for(i = 0; i < num; i++)
    {
        printf("*");
    }//end for
}//end stars()