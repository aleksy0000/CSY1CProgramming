/*
    Program Descriptor: Official Winter Olympics Games Software that will
                        1. Store Athlete Information in a structure.
                        2. Create a max amount of 2 structures at program start.
                        3. Let you enter athlete record details through a function.
                        4. Let you check for athletes in the record through a function.

    Author: Aleksy Szopinski

    Date: 08/04/2025
*/
//Header Files
#include <stdio.h>
#include <string.h> //for strcmp()


//Symbolic Names
#define FIRSTNAME 15
#define LASTNAME 30
#define NATION 30
#define EVENT 30
#define MAXATHLETES 2

//struct templates
struct date
{
    int day;
    int month;
    int year;
};

struct athleteRecord
{
    char firstName[FIRSTNAME];
    char lastName[LASTNAME];
    char nationality[NATION];
    struct date DOB;
    float height;
    float weight;
    char event[EVENT];
};


//Function Signatures
void enterAthleteDetails(struct athleteRecord *);
int checkForAthlete(struct athleteRecord *);


//Main 
int main()
{
    //initial variables
    struct athleteRecord athletes[MAXATHLETES];
    int maxAthletes;
    int athleteFound = 0;

    printf("How many athletes total?(Max 2)\n");
    scanf("%d", &maxAthletes);
    while(getchar()!='\n');

    //enter athlete details
    for(int i = 0;i < maxAthletes;i++)
    {
        printf("\n********Athlete %d********\n", i + 1);
        enterAthleteDetails(&athletes[i]);
    }//end for

    //check database for athlete
    for(int i = 0;i < maxAthletes;i++)
    {
        printf("\n********Athlete %d********\n", i + 1);
        athleteFound = checkForAthlete(&athletes[i]);
        if(athleteFound == 1)
        {
            printf("Found match in Athlete %d", i + 1);
            break;
        }//end if
    }//end for
    
    return 0; //end program

}//end main()

//Function Definitions

//Enter Athlete Details one by one
void enterAthleteDetails(struct athleteRecord *ptr)
{
    printf("\n****Athlete Detail Entry****\n");

    printf("Please enter athletes first name:\n");
    fgets(ptr->firstName,FIRSTNAME,stdin);
    ptr->firstName[strlen(ptr->firstName) - 1]='\0'; //removes newline character

    printf("Please enter athletes surname:\n");
    fgets(ptr->lastName,LASTNAME,stdin);
    ptr->lastName[strlen(ptr->lastName) - 1]='\0'; //removes newline character

    printf("Please enter athletes nationality:\n");
    fgets(ptr->nationality,NATION,stdin);
    ptr->nationality[strlen(ptr->firstName) - 1]='\0'; //removes newline character

    printf("\n****Enter Date of Birth****\n");

    printf("\nEnter Day:\n");
    scanf("%d", & ptr->DOB.day);
    while(getchar()!='\n');//clear buffer

    printf("\nEnter Month:\n");
    scanf("%d", & ptr->DOB.month);
    while(getchar()!='\n');//clear buffer

    printf("\nEnter Year:\n");
    scanf("%d", & ptr->DOB.year);
    while(getchar()!='\n');//clear buffer

    printf("\n****Enter Physical Details****\n");

    printf("\nEnter Height(cm):\n");
    scanf("%f", & ptr->height);
    while(getchar()!='\n');//clear buffer

    printf("\nEnter Weight(kg)\n");
    scanf("%f", & ptr->weight);
    while(getchar()!='\n');//clear buffer

    printf("\n****Enter Event Details****\n");

    printf("\nEnter Event Title:\n");
    fgets(ptr->event,EVENT,stdin);
    ptr->event[strlen(ptr->event) - 1]='\0'; //removes newline character

    printf("\n****Athlete Record Updated****\n");
}//end enterAthleteDetails()

//check for athlete by first name and last name
int checkForAthlete(struct athleteRecord *ptr)
{
    //initial variables
    char firstName[FIRSTNAME];
    char lastName[LASTNAME];
    int firstMatch = 0;
    int lastMatch = 0;
    
    printf("\n****Athlete Database Search****\n");
    
    printf("Enter First Name of Athlete:\n");
    fgets(firstName,FIRSTNAME,stdin);
    firstName[strlen(firstName) - 1]='\0'; //removes newline character

    printf("Enter surname of Athlete\n");
    fgets(lastName,LASTNAME,stdin);
    lastName[strlen(lastName) - 1]='\0'; //removes newline character

    //I made two seperate checks for first name and last name
    //Incase the person searching or the pesron who created the records typed one of the names incorrectly
    //So maybe there wasn't a Paddy Jim O'brien but there is a Paddy Jim.

    //check if first name matches
    if(strcmp(firstName,ptr->firstName)==0)
    {

        printf("\nDetected First Name match for Athlete...\n");

        firstMatch = 1;

    }//end if
    else
    {

        firstMatch = 0;

    }//end else

    //check if last name matches
    if(strcmp(lastName,ptr->lastName)==0)
    {

        printf("\nDetected Last Name match for Athlete...\n");

        lastMatch = 1;

    }//end if
    else
    {
        lastMatch = 0;

    }//end else

    //check if this is the athlete
    if(firstMatch == 1 && lastMatch == 1)
    {

        printf("\nFound a complete match!\n");

        printf("\nAthlete matches with the input %s %s\n",firstName,lastName);

        return 1;

    }//end if
    else
    {

        printf("\nMatch not found...\n");

        return 0;

    }//end else

    return 0; //incase you somehow dont end up in previous logical statements.

}//end checkForAthlete()

