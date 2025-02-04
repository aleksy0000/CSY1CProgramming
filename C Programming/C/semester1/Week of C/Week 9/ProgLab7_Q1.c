/*
    Program Descriptor: Assuming an integer array called ‘arr’ with 10 elements, what is in arr[8] after the
                        following code is executed?

                        StartProgram
                            for (i = 0; i < 10; i++)
                            {
                                arr[i] = 9 - i;
                            }
                            // Display the contents of arr[8]
                            for (i = 0; i < 10; i++)
                            {
                                arr[i] = arr[ arr[i] ];
                            }
                            // Display the contents of arr[8]
                        EndProgram

                        Include this code in a full program, compile and run it. Display the contents of arr[8]
                        to see its contents. Do you understand how it works and what is happening? I suggest
                        you step through the process on paper to understand it.

    Author: Aleksy Szopinski

    Date: 12/11/2024
*/
#include <stdio.h>

#define NUMS 10

int main()
{
    int arr[NUMS];
    int i;

    for (i = 0; i < NUMS; i++)
    {
        arr[i] = 9 - i; //this populates the array with 0 to 9 in reverse order 
    }

    // Display the contents of arr[8]
    for (i = 0; i < NUMS; i++)
    {
        arr[i] = arr[ arr[i] ];//so if i = 8, and the contents of arr[8] is 2. arr[8] recieves arr[2] which is 8.
        //so basically this reverses the order of the array
        printf("%d", arr[i]);
        
    }

    // Display the contents of arr[8]
    //printf("%d", arr[8]);

    return 0;
}
