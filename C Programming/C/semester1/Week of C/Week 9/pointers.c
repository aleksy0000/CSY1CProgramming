/*
    Working with pointers
*/
#include <stdio.h>

int main()
{
    int var1 = 1;
    char var2 = 'a';

    int *ptr1;
    char *ptr2;

    ptr1 = &var1;
    ptr2 = &var2;

    printf("var1 contains %d and it's location in ram is %p\n", var1, ptr1);
    printf("var2 contains %c and it's location in ram is %p", var2, ptr2);

    return 0;
}