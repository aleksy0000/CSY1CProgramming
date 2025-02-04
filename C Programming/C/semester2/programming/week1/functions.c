/*
    Learning functions
*/
#include <stdio.h>//header files first

//#define SIZE 5 //symbolic names second

//function signature
void stars(void); //function signatures third

int main()
{
    printf("Before function call\n\n");

    //execute our function stars()
    stars();//this is called calling the function

    printf("\n\nAfter function call");

    return 0;
}//end main()

//function stars() used to display a set of asterix
void stars(void)
{
    printf("****");
}//end stars()

