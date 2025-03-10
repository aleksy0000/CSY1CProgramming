/*
    Program Descriptor: A program that asks the user for their name, the user's name is then compared
                        with a list of names held in an array in memory. If the user's name, is in the list,
                        display a suitable greeting, otherwise "name not found".

    Author: Aleksy Szopinski

    Date: 04/03/2025
*/
//Header Files
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Symbolic Names
#define SIZE 50

//Function Signatures


//Main 
int main()
{
    char *names[3] = {"Mark","Joel","Cassandra"};
    char user[SIZE];
    int samename;

    printf("Enter your name\n\n=");
    fgets(user,SIZE,stdin);

    for(int i = 0;i<3;i++)
    {
        if(strcmp(user,names[i]) == 1)
        {
            printf("Hello %s", names[i]);
        }
    }

    return 0;
}

//Function Definitions