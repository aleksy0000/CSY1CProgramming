//libraries
#include <stdio.h>
#include <stdlib.h>

//Symbolic Names


//Struct templates


//function sigs

int main()
{
    //variables
    float *ptr;
    int patientsNum;
    float totalFees = 0;
    float avgFees = 0;
    /*FILE *fp;
    char char_out;*/

    //DMA
    printf("Enter how many patients you have seen today:\n");
    scanf("%d",&patientsNum);

    ptr = calloc(patientsNum,sizeof(int));

    if(ptr == NULL)
    {
        printf("Calloc unsuccesful, terminating program...\n");

        return 1; //end program
    }else
    {
        //input fee paid by each patient
        for(int i = 0; i < patientsNum; i++)
        {
            printf("Enter fee paid for patient %d:\n", i + 1);
            scanf("%f", &*(ptr + i));
        }

        //calculate total fees paid
        for(int i = 0;i < patientsNum;i++)
        {
            totalFees = totalFees + *(ptr + i);
        }

        //calculate average fee paid 
        avgFees = totalFees / patientsNum;

        printf("\nTotal Fees = %.2f\nAverage Fees = %.2f\n", totalFees, avgFees);

       /* //write total fees and average fee to fees.txt
        if(fp = fopen("fees.txt","w")==NULL)
        {
            printf("\nError Opening File\n");

            return 1; //end program
        }
        else
        {
            for(int i = 0;i < patientsNum;i++)
            {
                
            }
        }*/
        
        
    }//end else

    return 0;//end program
}//end main()

