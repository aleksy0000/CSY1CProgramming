/*
    2. Ask the user to enter 2 characters. Display these on the screen. Change your code and
    see what happens if you use %d as the delimiter for displaying these letters.

    Q: What happens if you press the Space key or hit Enter twice when entering a letter?
    A: The enter and space keys are still characters, white characters.
    Change your code and use %1s instead of %c in your scanf(). Does this fix the
    problem? Try.

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/
#include <stdio.h>

int main(){
    char character1;
    char character2;

    printf("Enter 2 characters");
    scanf("%c %c", &character1, &character2);

    printf("%d %d", character1, character2); //If i use %d instead of %c I get 99 instead of c. Ascii code maybe?

    return 0;
}