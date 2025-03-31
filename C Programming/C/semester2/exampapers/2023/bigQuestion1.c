/*
    Program Descriptor: Section B Question 2, 2023 exam paper.asm

    Author: Aleksy Szopinski

    Date: 31/03/2025
*/
//Libraries
#include <stdio.h>
#include <stdlib.h>


//Symbolic Names


//Struct Templates


//Function Signatures


//Program Start
int main()
{
    //variables
    int patientAmount;
    float *patientFees;
    FILE *fp;
    float total;
    float avg;

    //flow start

    //Dynamic Memory Allocation
    printf("How many patients have you seen today?\n");
    scanf("%d", &patientAmount);

    patientFees = calloc(patientAmount,sizeof(float));

    if(patientFees == NULL)
    {
        printf("DMA Failed, ending program...\n");

        return 1;
    }
    else
    {
        printf("DMA Succesful!\n");

        //Enter Fees
        for(int i = 0;i < patientAmount;i++)
        {
            printf("Please enter fee for patient %d\n", i + 1);
            scanf("%f",&*(patientFees + i));
        }

        if((fp = fopen("fees.txt","w")) == NULL)
        {
            printf("Failed to open file, ending program...\n");

            return 1;
        }
        else
        {
            //Calculate Total Fees
            for(int i;i < patientAmount;i++)
            {
                total = total + *(patientFees + i);
            }

            //print to terminal
            printf("Toal Fees for Today = %.2f\n", total);
            
            //write total fees to file
            fprintf(fp,"Total Fees for Today = %.2f\n",total);

            //Calculate Average Fees
            avg = total / patientAmount;

            //print to terminal
            printf("Average Fees for Today = %.2f\n", avg);

            //print to file
            fprintf(fp,"Average Fees for Today = %.2f\n",avg);

        }//end fopen else
    }//end DMA else

    //end program
    return 0;
}//end main()
