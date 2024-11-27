/*
Problem 4: Dynamic String Allocation
Ask the user for a string (limit input to 50 characters).
Dynamically allocate memory for the string using malloc based on its length.
Copy the input string into the allocated memory.
Print the copied string and the memory address of each character.
Free the allocated memory.
Challenge Question: What happens if the allocated memory size is smaller than the length of the string?
*/
//copied from chatgpt cause i dont know strings yet
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //step 1: input the string
    char buffer[50];
    printf("Enter a string(max 49 chars): ");
    scanf("%49s", buffer);

    //step 2: Allocate memory dynamically
    size_t len = strlen(buffer); //length of input string (excluding \0)
    char* str = (char*)malloc((len + 1) * sizeof(char));//+1 for \0

    if(str == NULL){
        printf("Memory Allocation failed.\n");
        return 0;
    }

    //step 3: Copy the string into allocated memory
    strcpy(str, buffer);

    //step 4: print the string and addresses of character
    printf("Copied string: %s\n", str);
    printf("Character addresses:\n");
    for(size_t i = 0; i < len + 1; i++)//include \0
    {
        printf("Character '%c' is at address %p\n", str[i], (void*)&str[i]);
    }

    //step 5: free the allocated memory
    free(str);

    return 0;
}