/*
    Program Descriptor: You are a software architect for an IT company.You meet with a client to discuss their requirements 
                        for a software application that you will design and develop. The client will
                        enter fees paid by each patient everyday. The amount of patients that he enters
                        changes everyday and he needs the total and average for everyday.

                        This information then needs to be saved to a text file.

    Author: Aleksy Szopinski

    Date: 02/12/2024
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Variables
    //calloc
    int NumOfPatients;
    float *patients;
    int i;
    //total / average
    float total;
    float average;
    //realloc
    char answer = 'n';
    int NewNumOfPatients;
    int ExtraPatients;
    int NewDataSize;
    float *patients_backup;


    //Prompt and gather user input for the number of patients:
    printf("\n|\tHow many patients have you seen today?\t|\n");
    scanf("%d", &NumOfPatients);

    //Allocate memory to fit the number of patients:
    patients = calloc(NumOfPatients, sizeof(float));

    //validate if memory was allocated succesfully:
    if(patients == NULL)
    {
        printf("Memory Allocation Unsuccesful, ending program...");

        return 0;
    }//end if
    else
    {
        printf("\n/// Memory Allocation Successful! ///\n");

        //prompt the user to enter the patient fees
        printf("\nPlease enter todays patient fees\n");
        for(i = 0; i < NumOfPatients; i++)
        {
            scanf("%f", & *(patients + i));
        }//end for

        //print fees paid by patients
        printf("\n|\tPaid Fees:\t|\n");
        for(i = 0; i < NumOfPatients; i++)
        {
            printf("Patient %d: %f\n", i, *(patients + i));
        }//end for

        //Find total 
        for(i = 0; i < NumOfPatients; i++)
        {
            total = total + *(patients + i);
        }//end for

        //find average
        average = total / NumOfPatients;
        
        //print total and average
        printf("\n| Total Fees Paid: %.2f | Average Fee: %.2f |", total, average);

        //prompt realloc()
        printf("Are there more patient fees to enter? y/n");
        scanf(" %c", &answer);

        if(answer == 'n')
        {
            printf("Goodbye");

            return 0;
        }
        else
        {
            //backup pointer location incase realloc unsuccesful
            patients_backup = patients;

            //prompt and gather user input for new size
            printf("How many new entries are you planning on adding?");
            scanf("%d", &ExtraPatients);

            NewNumOfPatients = NumOfPatients + ExtraPatients;

            //calculate total size of new block
            NewDataSize = (NumOfPatients + NewNumOfPatients) * sizeof(float);

            //realloc
            patients = realloc(patients, NewDataSize);

            //validate if realloc succesfull
            if(patients == NULL)
            {
                printf("Realloc unsuccesful, ending program...");

                return 0;
            }
            else
            {
                printf("\nEnter new data\n");
                for(i = NumOfPatients; i < NewNumOfPatients; i++)
                {
                    scanf("%f", & *(patients + i));
                }//end for

                //display updated fees, total and average;
                printf("\nUpdated List of Fees:\n");
                for(i = 0; i < NewNumOfPatients; i++)
                {
                    printf("Patient %d: %f\n", i, *(patients + i));
                }//end for

                //Find total 
                for(i = 0; i < NewNumOfPatients; i++)
                {
                    total = total + *(patients + i);
                }//end for

                //find average
                average = total / NewNumOfPatients;
                
                //print total and average
                printf("\n| Total Fees Paid: %.2f | Average Fee: %.2f |", total, average);
            }
        }
        
    }//end else

    free(patients);
    free(patients_backup);

    return 0;

}//end main