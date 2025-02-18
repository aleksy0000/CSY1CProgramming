/*
    Program Descriptor: Tower of Hanoi
                        1. Print the move for a user input number of disks.
                        2. Each recursive call to the ToH places the ToH function on the stack
                        Print the stack level of each call 
*/
#include <stdio.h>

//symbolic names
#define NUMTOWERS 3

//function sig
void movetower(int [], int[], int[]);

//global variables
int disk;
int source;
int dest;
int spare;

int main()
{
    //variables
    int disk;
    int source;
    int dest;
    int spare;
    int tower1[NUMTOWERS] = {1,2,3}; //1 = small disk, 2 = medium disk, 3 = large disk
    int tower2[NUMTOWERS] = {0};
    int tower3[NUMTOWERS] = {0};
    int numofdisk;


    movetower(tower1, tower2, tower3);

}//end main()

void movetower(int tower1[], int tower2[], int tower3[])
{
    extern int disk;
    extern int source;
    extern int dest;
    extern int spare;

    //print tower1
    printf("Rings on Tower 1:\n");
    for(int i = 0; i<NUMTOWERS; i++)
    {
        printf("%d\n", tower1[i]);
    }//endfor

    //print tower2
    printf("Rings on Tower 2:\n");
    for(int i = 0; i<NUMTOWERS; i++)
    {
        printf("%d\n", tower2[i]);
    }//endfor

    //print tower3
    printf("Rings on Tower 3:\n");
    for(int i = 0; i<NUMTOWERS; i++)
    {
        printf("%d\n", tower3[i]);
    }//endfor

    if(disk == 0)
    {
        
    }

}//end movetower