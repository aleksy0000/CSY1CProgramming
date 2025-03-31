/*
    Program Descriptor: Airline Database but with arrays

    Author: Aleksy Szopinski

    Date: 25/03/2025
*/
//Header Files
#include <stdio.h>
#include <string.h>

//Symbolic Names
#define NAME 30
#define SEAT 3
#define DESTINATION 20
#define PASSENGERS 2
#define SEPERATOR 50

//struct templates
struct passenger_details
{
    char airlineName[NAME];
    int flightID;
    char passengerSurname[NAME];
    char seatID[SEAT];
    char dest[DESTINATION];
    int bagAmount;
};

//Function Signatures
void enter_passenger_details(struct passenger_details*);
void display_passenger_details(struct passenger_details);


//Main 
int main()
{
    struct passenger_details passengers[PASSENGERS];

    //enter passenger details
    for(int i = 0;i < PASSENGERS;i++)
    {
        printf("Enter Passenger %d Details:\n", i + 1);
        enter_passenger_details(&passengers[i]);
    }

    //Seperate input details and display details for readability
    printf("\n");
    for(int i = 0; i < SEPERATOR;i++)
    {
        printf("_");
    }

    //display passenger details
    printf("\n\nPassenger Details\n\n");

    for(int i = 0; i < PASSENGERS;i++)
    {
        printf("\n\nPassenger %d Details:\n", i + 1);
        display_passenger_details(passengers[i]);
    }

    //end program
    return 0;
}

//Function Definitions
void enter_passenger_details(struct passenger_details *passenger)
{
    printf("Enter Airline Name:\n");
    fgets(passenger->airlineName,NAME,stdin);
    passenger->airlineName[strlen(passenger->airlineName) - 1]='\0'; 

    printf("Enter Flight ID:\n");
    scanf("%d",&passenger->flightID);
    while(getchar()!='\n');

    printf("Enter Passenger Surname:\n");
    fgets(passenger->passengerSurname,NAME,stdin);
    passenger->passengerSurname[strlen(passenger->passengerSurname) - 1]='\0';

    printf("Enter Seat ID (e.g., 12A):\n");
    fgets(passenger->seatID,SEAT,stdin);
    passenger->seatID[strlen(passenger->seatID) - 1]='\0';
    while(getchar()!='\n');

    printf("Enter Flight Destination:\n");
    fgets(passenger->dest,NAME,stdin);
    passenger->dest[strlen(passenger->dest) - 1]='\0';

    printf("Enter amount of bags:\n");
    scanf("%d", &passenger->bagAmount);
    while(getchar()!='\n');

    return;
}

void display_passenger_details(struct passenger_details passenger)
{
    for(int i = 0; i < SEPERATOR;i++)
    {
        printf("_");
    }
    printf("\n");
    printf("|\tAirline: %s\n",passenger.airlineName);
    printf("|\tFlight ID: %d\n",passenger.flightID);
    printf("|\tPassenger Surname: %s\n",passenger.passengerSurname);
    printf("|\tSeat ID: %s\n",passenger.seatID);
    printf("|\tFlight Destination: %s\n",passenger.dest);
    printf("|\tAmount of bags carried: %d\n",passenger.bagAmount);
    printf("|");
    for(int i = 0; i < SEPERATOR;i++)
    {
        printf("_");
    }
    printf("|");

    return;
}