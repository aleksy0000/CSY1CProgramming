/*
    Program Descriptor: Structure template that stores biographical data about a person

    Author: Aleksy Szopinski

    Date: 18/03/2025
*/
//Header Files
#include <stdio.h>
#include <string.h>

//Symbolic Names
#define FIRSTNAME 20
#define LASTNAME 20
#define DOB 3
#define EYECOLOUR 10
#define CITIZENSHIP 20

//struct templates
struct bio
{
    char firstName[FIRSTNAME];
    char lastName[LASTNAME];
    int dateofbirth[DOB];
    float height;
    float weight;
    char eyeColour[EYECOLOUR];
    char citizenShip[CITIZENSHIP];
};
//Function Signatures


//Main 
int main()
{
    struct bio person1;
    struct bio person2;

    //Enter Data for Person 1
    printf("Enter Person 1 First Name:\n");
    fgets(person1.firstName, sizeof(person1.firstName),stdin);
    printf("Enter Person 1 Last Name:\n");
    fgets(person1.lastName, sizeof(person1.lastName),stdin);

    printf("Enter Person 1 Date of Birth Day:\n");
    scanf("%d", &person1.dateofbirth[0]);
    printf("Enter Person 1 Date of Birth Month:\n");
    scanf("%d", &person1.dateofbirth[1]);
    printf("Enter Person 1 Date of Birth Year:\n");
    scanf("%d", &person1.dateofbirth[2]);

    printf("Enter Person 1 Height in CM:\n");
    scanf("%f", &person1.height);
    while(getchar()!='\n');

    printf("Enter Person 1 Weight in KG:\n");
    scanf("%f", &person1.weight);
    while(getchar()!='\n');

    printf("Enter Person 1 Eye Colour:\n");
    fgets(person1.eyeColour,sizeof(person1.eyeColour),stdin);

    printf("Enter Person 1 Citizenship:\n");
    fgets(person1.citizenShip,sizeof(person1.citizenShip),stdin);

    //print data inside bio.person1
    printf("\n\nPerson 1 Details:\n\n");
    printf("Person 1 First Name: %s\n", person1.firstName);
    printf("Person 1 Last Name: %s\n", person1.lastName);
    
    printf("Person 1 DOB:\n");
    for(int i = 0;i < DOB; i++)
    {
        printf("%d", person1.dateofbirth[i]);
        if(i != DOB - 1)
        {
            printf("/");
        }
    }

    printf("\nPerson 1 Height: %f cm\n", person1.height);
    printf("Person 1 Weight: %f kg\n", person1.weight);
    printf("Person 1 Eye colour: %s\n", person1.eyeColour);
    printf("Person 1 Citizenship: %s\n", person1.citizenShip);

    //copy data from bio.person1 to bio.person2
    strcpy(person2.firstName,person1.firstName);
    strcpy(person2.lastName,person2.lastName);
    for(int i = 0;i < DOB;i++)
    {
        person2.dateofbirth[i] = person1.dateofbirth[i];
    }
    person2.height = person1.height;
    person2.weight = person1.weight;
    strcpy(person2.eyeColour,person1.eyeColour);
    strcpy(person2.citizenShip,person1.citizenShip);

    //modify data for person 2
    printf("Enter Person 2 First Name:\n");
    fgets(person2.firstName, sizeof(person2.firstName),stdin);
    printf("Enter Person 1 Last Name:\n");
    fgets(person2.lastName, sizeof(person2.lastName),stdin);

    printf("Enter Person 1 Date of Birth Day:\n");
    scanf("%d", &person2.dateofbirth[0]);
    printf("Enter Person 1 Date of Birth Month:\n");
    scanf("%d", &person2.dateofbirth[1]);
    printf("Enter Person 1 Date of Birth Year:\n");
    scanf("%d", &person2.dateofbirth[2]);

    //display person 2 data;
    printf("\n\nPerson 2 Details:\n\n");
    printf("Person 2 First Name: %s\n", person2.firstName);
    printf("Person 2 Last Name: %s\n", person2.lastName);
    
    printf("Person 2 DOB:\n");
    for(int i = 0;i < DOB; i++)
    {
        printf("%d", person2.dateofbirth[i]);
        if(i != DOB - 1)
        {
            printf("/");
        }
    }

    printf("\nPerson 1 Height: %f cm\n", person2.height);
    printf("Person 1 Weight: %f kg\n", person2.weight);
    printf("Person 1 Eye colour: %s\n", person2.eyeColour);
    printf("Person 1 Citizenship: %s\n", person2.citizenShip);

    return 0;
}

//Function Definitions