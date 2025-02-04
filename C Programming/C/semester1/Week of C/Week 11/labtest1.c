/*
    Program Descriptor: C Program for Programming Lab Test 1, This menu-driven program allows the user to choose between 3 menu
                        choices by entering keys as follows 1: Generate 5 Random Numbers 2: View Last Number Generation 0: Exit application. 
                        The program runs until the user enters the key 0 to exit the program. Each time the user chooses to generate 5 new numbers, 
                        5 new unique randomly generated numbers are assigned to their appropriate elements in the randomnumbers array. The highest/lowest value
                        is identified and displayed after the randomly generated numbers.

    Author: Aleksy Szopinski

    Date: 26/11/2024
*/

#include <stdio.h> //standard input-output
#include <stdlib.h> // this header file is required for the rand() function
#include <time.h> // used in srand() for seeding purposes

#define RANDNUMS 5

int main()
{
    int num = 0;
    // place any extra variables here
    int randomnumbers[RANDNUMS];
    int i;
    int j;
    int duplicate;
    int highestval;
    int lowestval;
    int user_input = -1;

    // seed the random number generator with a range 0 – large number
    srand(time(NULL));

    //the main loop that contains the random number generation.
    do
    {
        //Let the user choose if they want to generate 5 numbers again, view last generation or exit application
        printf("\nPlease choose one of the following options:\n");
        printf("\nOption 1: Generate 5 Random Numbers\nOption 2: View Last Generation\n0:Exit Application(don't run the program again without entering 0 first)\n");
        scanf(" %d", &user_input);

        //Random Number Generation
        if(user_input == 1) 
        {
            printf("\nGenerating 5 random numbers between 1 - 20 \n");
            
            // num is assigned a random number between 1 – 20 and then num is assigned to the appropriate element in the array.
            for(i = 0; i < RANDNUMS; i++)
            {
                //reset duplicate variable.
                duplicate = 0;

                //randomise new number.
                num = (rand() % 20) + 1;

                //Check if it's a duplicate
                for(j = 0;j < RANDNUMS;j++)
                {

                    if(randomnumbers[j] == num)
                    {

                        duplicate = 1;
    
                    }//end if

                }//end while

                //if it's not a duplicate assign to the array element.
                if(duplicate == 0) 
                {

                    randomnumbers[i] = num;

                }//end if
                //if it is duplicate restart loop at current index.
                else if(duplicate == 1) 
                {

                    --i;

                }//end else if

            }//end for

            //display all the values in the randomnumbers array.
            printf("\nRandom Number Generation:\n");
            for(i = 0; i < RANDNUMS; i++)
            {

                printf("Random Number %d: %d\n", i + 1, randomnumbers[i]);

            }//end for

            //reset highest/lowest variables
            highestval = randomnumbers[0];
            lowestval = randomnumbers[0];

            //Finding the highest and lowest number in the randomnumbers array
            for(i = 0; i < RANDNUMS; i++)
            {
                if(randomnumbers[i] > highestval)
                {

                    highestval = randomnumbers[i];

                }//end if
                else if(randomnumbers[i] < lowestval)
                {

                    lowestval = randomnumbers[i];

                }//end else if
            }//end for

            //display the highest and lowest values of the array.
            printf("\nHighest Value: %d\tLowest Value: %d\n", highestval, lowestval);

        }//end if(user_input == 1)
        //Display last random number generation
        else if(user_input == 2)
        {
            //display all the random values in the last random number generation.
            printf("\nLast Random Number Generation:\n");

            for(i = 0; i < RANDNUMS; i++)
            {

                printf("Random Number %d: %d\n", i + 1, randomnumbers[i]);

            }//end for

            //display the highest and lowest values in the last random number generation
            printf("\nHighest/Lowest Values from Last Generation:\n");
            printf("Highest Value: %d\tLowest Value: %d\n", highestval, lowestval);

        }//end else if

    }while(user_input != 0); //end do...while loop once user enters '0'.

    printf("Goodbye"); //goodbye message to validate that the loop has been exited succesfully.
    
    return 0;
    
} // end main