/*
    Fighting Game V1: Boxing Game, simple punches.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int jab = 1;
    int cross = 2;
    int lefthook = 3;
    int righthook = 4;
    int leftuppercut = 5;
    int rightuppercut = 6;
    int playerhealth = 100;
    int enemyhealth = 100;
    int playermove;
    int enemymove;
    int hitmark;

    srand(100);

    while(playerhealth != 0 && enemyhealth != 0)
    {
        enemymove = (rand() % 6) + 1;
        if(enemymove == 1) //bot jab
        {
            printf("Your opp throws a jab");
            hitmark = (rand() % 3) + 1;
            if(hitmark == 1)
            {
                printf("You've been hit with a jab in the nose!, -15 health!");
                playerhealth = playerhealth - 15;
            }
            else if(hitmark == 2)
            {
                printf("You've been hit with a jab in the stomach!, -5 health!");
                playerhealth = playerhealth - 5;
            }
            else if(hitmark == 3)
            {
                printf("Your opponent missed!");
            }
        }//end if bot jab
        else if(enemymove == 2) //bot cross
        {
            printf("Your opp throws a cross");
            hitmark = (rand() % 3) + 1;
            if(hitmark == 1)
            {
                printf("You've been hit with a cross in the nose!, -30 health!");
                playerhealth = playerhealth - 30;
            }
            else if(hitmark == 2)
            {
                printf("You've been hit with a cross in the stomach!, -10 health!");
                playerhealth = playerhealth - 10;
            }
            else if(hitmark == 3)
            {
                printf("Your opponent missed!");
            }
        }//end if bot cross
        else if(enemymove == 3) //bot left hook
        {
            printf("Your opp throws a left hook");
            hitmark = (rand() % 3) + 1;
            if(hitmark == 1)
            {
                printf("You've been hit with a left hook on the jaw!, -50 health!");
                playerhealth = playerhealth - 30;
            }
            else if(hitmark == 2)
            {
                printf("You've been hit with a left hook in the side!, -30 health!");
                playerhealth = playerhealth - 10;
            }
            else if(hitmark == 3)
            {
                printf("Your opponent missed!");
            }
        }//end if bot left hook
        else if(enemymove == 4) //bot right hook
        {
            printf("Your opp throws a right hook");
            hitmark = (rand() % 3) + 1;
            if(hitmark == 1)
            {
                printf("You've been hit with a right hook to the jaw!, -50 health!");
                playerhealth = playerhealth - 30;
            }
            else if(hitmark == 2)
            {
                printf("You've been hit with a right hook to liver!, -100 health!");
                playerhealth = playerhealth - 10;
            }
            else if(hitmark == 3)
            {
                printf("Your opponent missed!");
            }
        }//end if bot right hook
        else if(enemymove == 5)
        {
            printf("Your opp throws a left uppercut");
            hitmark = (rand() % 2) + 1;
            if(hitmark == 1)
            {
                printf("You've been hit with a left uppercut to the chin!, -40 health!");
                playerhealth = playerhealth - 30;
            }
            else if(hitmark == 2)
            {
                printf("Your opponent missed!");
            }
        }
        else if(enemymove == 6)
        {
            printf("Your opp throws a right uppercut");
            hitmark = (rand() % 2) + 1;
            if(hitmark == 1)
            {
                printf("You've been hit with a right uppercut to the chin!, -40 health!");
                playerhealth = playerhealth - 30;
            }
            else if(hitmark == 2)
            {
                printf("Your opponent missed!");
            }
        }
        
        printf("How will you respond???");
        scanf("%d", playermove);

        if(playermove == 1)
        {
            hitmark = (rand() % 3) + 1;
            if(hitmark == 1)
            {
                printf("You've hit him with a jab in the nose!, -15 health!");
                enemyhealth = enemyhealth - 15;
            }
            else if(hitmark == 2)
            {
                printf("You've hit him with a jab in the stomach!, -5 health!");
                enemyhealth = enemyhealth - 5;
            }
            else if(hitmark == 3)
            {
                printf("You missed!");
            }
        }
        
    }
}