/*
    descriptor: this program demonstrates getchar() and putchar()
*/

#include <stdio.h>

int main()
{
    char my_char = ' ';
    printf("Enter any character\n");

    //use the getchar() function
    //scanf("%c", &my_char);

    //same as above
    my_char = getchar(); //works the same as scanf but only for characters  

    printf("You entered:\n");
    putchar(my_char); //same as printf("%c", my_char); \n is built into putchar

    return 0;
}