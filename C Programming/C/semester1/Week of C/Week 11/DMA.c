#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int numbers = 0;
    int no_bytes = 0;
    int i;

    //part 1
    //User enters size of dataset
    printf("\nHow many numbers will you enter?\n");
    scanf("%d", &numbers); 

    //part 2
    //calculate the number of bytes required to store the set of numbers in memory
    no_bytes = numbers * sizeof(int);

    //part 3
    //allocate the required block of memory 
    ptr = malloc(no_bytes);

    //part 4
    //check if malloc was successful
    if(ptr == NULL)//malloc unsuccesful
    {
        printf("\nFailed to allocate memory, program ends.\n");

        return 0;
    }//end if 
    else //malloc successful
    {
        //part 5
        //using the memory
        printf("\nMemory allocated successfully\n");
        printf("\nEnter the set of %d numbers\n", numbers);

        //enter data items into the allocated memory block
        for(i = 0; i < numbers; i++)
        {
            scanf("%d", & *(ptr + i));
        }//end for

        printf("\nYou entered:\n");

        //display the data items entered into the allocated memory block.
        for(i = 0; i < numbers; i++)
        {
            printf("%d\n", *(ptr + i));
        }//end for

        //part 6
        //free the allocated memory block once finished
        free(ptr);

        return 0;
    }//end else
}//end main