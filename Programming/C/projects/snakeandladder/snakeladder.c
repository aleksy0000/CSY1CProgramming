/*
    Descriptor: Attempt at making a snake and ladder game

    The rules of the game are as follows:
    1.The first person to reach 100 wins.

    2.Each player gets only one chance in a single traversing.

    3.Snakes decrease your points while the ladder increases them.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(100);
    int roll = 3;
    int position;
    
    //declaring and initializing the array
    char arr_char[9] = {'1','2','L','4','5','6','7','S','9'};
    //declaring and initializing the pointer
    char* ptr = &arr_char[0];

    roll = (rand() % 6) + 1;
    printf("You rolled: %d", roll);

    position = position + roll;

    //array 
    for (int i = 0; i < position; i++) {
        printf("%c ", *ptr++);
        if(*ptr = 'L');
            position = roll + 4;
            printf("You went up the ladder 4 points!");
    }

    


}
