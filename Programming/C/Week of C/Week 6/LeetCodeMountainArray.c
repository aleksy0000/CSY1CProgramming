#include <stdio.h>
#include <stdbool.h>

int main()
{
    int arr[4];
    arr[0] = 0;
    arr[1] = 3;
    arr[2] = 2;
    arr[3] = 1;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    //leetcode question starts here.
    int i;
    int n;
    int strictpoints;
    bool mountain = true;
    if(arrSize == 1)
    {
        mountain = false;
    }

    for(i = 0; i < arrSize - 1; i++)
    {   
            if(i != arrSize - 1 && i != 0)
            {
                if(arr[i] < arr[i + 1])
                {
                    if(arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                    {
                        mountain = false;//troublemaker for case 6(solved)
                    }
                }
                else if(arr[i] > arr[i + 1])
                {
                    if(arr[i] < arr[i - 1] && arr[i] < arr[i + 1])
                    {
                        mountain = false;//the troublemaker for case 3(solved)
                    }
                }
                else if(arr[i] == arr[i + 1])
                {
                    mountain = false;
                }
            }
            else if(i == 0)
            {
                if(arr[0] > arr[1])
                {
                    mountain = false;
                }
            }
            else if(i == arrSize - 1)
            {
                if(arr[i] > arr[i - 1])
                {
                    mountain = false;
                }
            }
    }//end for

    n = arrSize - 1;

    printf("size:%d\n", arrSize);

    printf("n:%d\n", n);

    printf("%d\n", mountain);


}