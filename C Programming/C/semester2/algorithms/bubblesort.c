#include <stdio.h>

//Bubble Sort
int main()
{
    int i, j;
    int swapped;
    int temp;

    int arr[] = {18,2372,923,2832,2932,532,2382,526,2382,1913};
    int n = 10;

    for (i = 0; i < n - 1; i++) {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
                printf("swapped\n");
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == 0)
            break;
    }

    //print array
    for(int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}