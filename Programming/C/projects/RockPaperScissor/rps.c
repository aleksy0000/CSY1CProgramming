/*
    Descriptor: Rock Paper Scissor in C attempt 1

    Author: Aleksy Szopinski
    
    Date: 02/10/2024.

    Conclusion: Success with a little gpt help.
*/
#include <stdio.h>
#include <stdlib.h> //need this for randomized numbers
#include <time.h>

int main()
{
    srand(100);

    int rock = 1;
    int paper = 2;
    int scissor = 3;
    int choice;
    int rnum;
    int p_points = 0;
    int c_points = 0;


    while(p_points != 5 && c_points != 5)
    {
        rnum = (rand() % 3) + 1;

        printf("1.Rock 2.Paper 3.Scissor CHOOSE.\n\n");
        scanf("%d", &choice);

        if(choice == rock && rnum == rock)
        {
            printf("\nDRAW!\n");
        }
        if(choice == rock && rnum == paper)
        {
            printf("\nYOU LOSE!\n");
            c_points++;
        }
        if(choice == rock && rnum == scissor)
        {
            printf("\nYOU WIN!\n");
            p_points++;
        }
        if(choice == paper && rnum == paper)
        {
            printf("\nDRAW!\n");
        }
        if(choice == paper && rnum == scissor)
        {
            printf("\nYOU LOSE!\n");
            c_points++;
        
        }
        if(choice == paper && rnum == rock)
        {
            printf("\nYOU WIN!\n");
            p_points++;
        }
        if(choice == scissor && rnum == scissor)
        {
            printf("\nDRAW!\n");
        }
        if(choice == scissor && rnum == rock)
        {
            printf("\nYOU LOSE!\n");
            c_points++;
        }
        if(choice == scissor && rnum == paper)
        {
            printf("\nYOU WIN!\n");
            p_points++;
        }
        
    }
    printf("Player Points = %d\n\n", p_points);
        printf("Computer Points = %d\n\n", c_points);

    if(c_points == 5)
    {
        printf("Computer Wins!");
    }
    if(p_points == 5)
    {
        printf("You Win!");
    }
    return 0;
} 