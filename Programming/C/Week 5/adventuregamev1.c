/*
    an adventure game 
*/
#include <stdio.h>

int main()
{
    int mchoice;
    int playerchoice = 0;
    int playercharacter = 0;
    int playerhealth;

    do
    {
        printf("Welcome to the game");
        printf("Would you like to begin?");
        printf("1: Yes 0: NO");
        scanf("%d", &mchoice);

        if(mchoice == 1)
        {
            while(playerchoice == 0)
            {
                printf("Choose your character\n");
                printf("1: Big Billy\n2: Medium Billy\n3: Little Billy\n");
                printf("\nSelect character for more info\n");
                scanf("%d", &playerchoice);
                if(playerchoice == 1)
                {
                    printf("big billy got 200 health");
                    printf("Would you like to play as big billy?");
                    printf("1: YES 0: NO");
                    scanf("%d", &playerchoice);
                    if(playerchoice == 1);
                    {
                        playercharacter = playercharacter + 1;
                        playerhealth = playerhealth + 200;
                        break;
                    }//end inner if
                }//end if

            }//end while

        
        }//end if
    } while (mchoice != 0);//end do while
    
    return 0;
}//end main
