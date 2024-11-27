#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int no_bytes = 0;
    int numbers = 0;
    int i;

    //part 1
    //How big is the dataset
    printf("\nEnter how many numbers you are going to enter\n");
    scanf("%d", &numbers);

    //part 2
    //calculate the bytes
    no_bytes = numbers * sizeof(int);

    //part 3
    //allocate the bytes and assign the address to a pointer
    ptr = (int*) malloc(no_bytes);

    //part 4
    //check if malloc was succesful
    if(ptr == NULL) //unsuccesful
    {
        printf("\nMalloc unsuccesful\n");

        return 0; //end program
    }
    else //if malloc successful
    {
        printf("\nMalloc successful\n");

        //user enter data
        printf("\nEnter %d values\n", numbers);

        for(i = 0; i < numbers; i++)
        {
            scanf("%d", &ptr[i]);
        }

        //entered data output
        printf("You have entered:\n");
        for(i = 0; i < numbers; i++)
        {
            printf("%d\n", ptr[i]);
        }

        free(ptr);

        return 0;
    }//end else
}//end main