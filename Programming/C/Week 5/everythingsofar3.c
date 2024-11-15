/*
    Program to demonstrate the do...while loop
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{//start main block
    int menuchoice = 0;
    char i;
    do
    {//start do block
        for(i = 1;i <= 33; i++)
        {
            printf("_");
        }
        printf("\n|\tWelcome to the menu\t|\n|\t1: Calculator\t\t|\n|\t2: Add Numbers\t\t|\n|\t3: Rock Paper Scissors\t|\n|\t0: End\t\t\t|\n|\tChoice:\n");
        scanf("%d", &menuchoice);

        if(menuchoice == 1) //calculator
        {//start if block
            char oper;
            float num1;
            float num2;
            float result;

            printf("Please enter maths problem\n");
            scanf("%f%c%f", &num1, &oper, &num2);

            switch(oper)
            {//start switch
                case '+':  result = num1 + num2;
                break;

                case '-': result = num1 - num2;
                break;

                case '/': result = num1 / num2;
                break;

                case '*':
                case 'X':
                case 'x': result = num1 * num2;

                case '%': result = (int)num1 % (int)num2;
                break;

                default: break;
            }//end switch 
            printf("%.2f %c %.2f = %.2f\n", num1, oper, num2, result);
        }//end if block / end calculator

        if(menuchoice == 2) //Add Numbers
        {//start if block
            int num1 = 1;
            int total = 0;

            printf("Enter positive integer or enter 0 to end the program\n\n");
            printf("%d + ", total);

            while(num1 != 0)
            {
                scanf("%d", &num1);

                if(num1 == 0)
                {
                    printf("bye\n ");
                    break;
                }

                total = total + num1;

                printf("\n%d + ", total);
            }
            printf("total = %d\n", total);
        }//end if block

        if(menuchoice == 3) //Rock Paper Scissors
        {//start if block
            int rock = 1;
            int paper = 2;
            int scissor = 3;
            int playerchoice;
            int botchoice;
            int pscore;
            int bscore;

            srand(100);

            while (pscore != 5 && bscore != 5)
            {
                printf("Player Score: %d Bot Score: %d\n", pscore, bscore);

                botchoice = (rand() % 3) + 1;

                printf("CHOOSE:\n1:ROCK\n2:PAPER\n3:SCISSOR\n");
                scanf("%d", &playerchoice);

                if(playerchoice == rock && botchoice == rock)
                {
                    printf("YOU BOTH CHOSE ROCK!");
                    printf("\nDRAW!\n");
                }
                else if(playerchoice == rock && botchoice == paper)
                {
                    printf("YOU CHOSE ROCK | BOT CHOSE PAPER");
                    printf("\nYOU LOSE!\n");
                    bscore++;
                }
                else if(playerchoice == rock && botchoice == scissor)
                {
                    printf("YOU CHOSE ROCK | BOT CHOSE SCISSOR");
                    printf("\nYOU WIN!\n");
                    pscore++;
                }
                else if(playerchoice == paper && botchoice == paper)
                {
                    printf("YOU BOTH CHOSE PAPER!");
                    printf("\nDRAW!\n");
                }
                else if(playerchoice == paper && botchoice == scissor)
                {
                    printf("YOU CHOSE PAPER | BOT CHOSE SCISSOR");
                    printf("\nYOU LOSE!\n");
                    bscore++;
                
                }
                else if(playerchoice == paper && botchoice == rock)
                {
                    printf("YOU CHOSE PAPER | BOT CHOSE ROCK");
                    printf("\nYOU WIN!\n");
                    pscore++;
                }
                else if(playerchoice == scissor && botchoice == scissor)
                {
                    printf("YOU BOTH CHOSE SCISSOR!");
                    printf("\nDRAW!\n");
                }
                else if(playerchoice == scissor && botchoice == rock)
                {
                    printf("YOU CHOSE SCISSOR | BOT CHOSE ROCK");
                    printf("\nYOU LOSE!\n");
                    bscore++;
                }
                else if(playerchoice == scissor && botchoice == paper)
                {
                    printf("YOU CHOSE SCISSOR | BOT CHOSE PAPER");
                    printf("\nYOU WIN!\n");
                    pscore++;
                }
                else
                {
                    printf("INVALID INPUT");
                }
            }//end while loop
            printf("Player Score: %d Bot Score: %d\n", pscore, bscore);
            if(pscore == 5)
                {
                    printf("YOU WIN THE GAME\n\n");
                }
            if(bscore == 5)
                {
                    printf("YOU LOSE THE GAME\n\n");
                }
        }//end if block // end rps
    }//end do block
    while (menuchoice != 0);
    
    printf("You have ended the program");

    return 0;
}//end main block