/*
    functions with more than 1 parameter
*/
#include <stdio.h>

//function signature
void stars(int, char);

int main()
{
    int no_chars = 0;
    char my_char;

    printf("How many characters to display?\n\n");
    scanf("%d", &no_chars);

    //clears the input buffer
    while(getchar()!='\n');

    printf("which characters to display?\n\n");
    scanf("%c", &my_char);

    //call the function stars()
    stars(no_chars, my_char);

    printf("\n\nAfter function call");

    return 0;
}//end main()

//function stars() used to display a set of characters
void stars(int num, char ch)
{
    int i;

    for(i = 0; i < num; i++)
    {
        printf("%c", ch);
    }//end for
}//end stars()