#include <stdio.h>
#include <time.h>

#define M 10

int duplicatenum(int [], int[], int);

int main()
{
    int array1[M];
    int array2[M];
    int i = 0;
    int ncount;
    int rand();
    time_t pStart, pEnd;

    pStart = clock();//record start time

    //fill array with random numbers
    for(i = 0;i < M;i++)
    {
        array1[i] = (rand() % M) + 1;
        array2[i] = (rand() % M) + 1;
    }

    ncount = duplicatenum(array1,array2,i);

    pEnd = clock();//record end time

    printf("\n\nElapsed time is %1.7lf seconds\n", (double)(pEnd-pStart)/CLOCKS_PER_SEC);
}

int duplicatenum(int array1[],int array2[],int i)
{
    int dupcount;
    if(i == M - 1)
    {
        dupcount++;
        return dupcount;
        printf("Im in the if block");
    }
    else
    {
        dupcount = duplicatenum(array1,array2,i + 1);
        printf("Im in the else block");
    }
}