/*
Program that demonstrates standard input
*/
#include <stdio.h>

main()
{
    int var = 0; //this line says to OS, go to the ram, find 4 bytes of memory and that is where var and it's data will be stored.

    /*All space in ram has a unique identifier, all OS do it the same way using a numbering system. Starts at 0 and goes up always in positive,
    when it goes to ten, it's not ten its 1 and 0 in the system.*/

    printf("enter any whole number\n");

    //ensure you include the & character before the variable name.

    scanf("%d", &var);

    printf("var contains %d", var);

    return 0;
}