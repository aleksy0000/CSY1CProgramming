//O(2n)
#include <stdio.h>
#include <time.h>

#define M 100
#define N 100

int main()
{
    int arr[M];
    int n;
    int ncount;
    int rand();
    time_t pStart, pEnd;

    pStart = clock();//record start time

    //fill array with random numbers
    for(int i = 0;i < M;i++)
    {

        arr[i] = (rand() % M) + 1;

        //check if random number assignment worked.
        printf("Element %d = %d\n",i + 1,arr[i]);
    }

    //check for random number n
    for(int i = 0;i < M;i++)
    {
        n = (rand() % M) + 1;
        if(arr[i]==n)
        {
            ncount++;
        }
    }
    printf("\n\nRandom Number duplicates appeared %d times in the array",n,ncount);

    pEnd = clock();//record end time

    printf("\n\nElapsed time is %1.7lf seconds\n", (double)(pEnd-pStart)/CLOCKS_PER_SEC);
}