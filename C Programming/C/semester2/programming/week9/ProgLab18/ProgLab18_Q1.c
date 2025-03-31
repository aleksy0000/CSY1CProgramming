/*
    Program Descriptor: Airline Database

    Author: Aleksy Szopinski

    Date: 25/03/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define NAME 30
#define SEAT 3
#define DESTINATION 20

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
    struct passenger_details passenger1, passenger2;

    printf("Enter Passenger 1 Details:\n");

    enter_passenger_details(&passenger1);

    printf("\n\nPassenger 1 Details:\n");

    display_passenger_details(passenger1);

    printf("\nEnter Passenger 2 Details:\n");

    enter_passenger_details(&passenger2);

    printf("\n\nPassenger 1 Details:\n");

    display_passenger_details(passenger2);

    return 0;
}

//Function Definitions
void enter_passenger_details(struct passenger_details *passenger)
{
    printf("Enter Airline Name:\n");
    fgets(passenger->airlineName,NAME,stdin);

    printf("Enter Flight ID:\n");
    scanf("%d",&passenger->flightID);
    while(getchar()!='\n');

    printf("Enter Passenger Surname:\n");
    fgets(passenger->passengerSurname,NAME,stdin);

    printf("Enter Seat ID (e.g., 12A):\n");
    fgets(passenger->seatID,SEAT,stdin);
    while(getchar()!='\n');

    printf("Enter Flight Destination:\n");
    fgets(passenger->dest,NAME,stdin);

    printf("Enter amount of bags:\n");
    scanf("%d", &passenger->bagAmount);
    while(getchar()!='\n');

    return;
}

void display_passenger_details(struct passenger_details passenger)
{
    printf("Airline: %s\n",passenger.airlineName);
    printf("Flight ID: %d\n",passenger.flightID);
    printf("Passenger Surname: %s\n",passenger.passengerSurname);
    printf("Seat ID: %s\n",passenger.seatID);
    printf("Flight Destination: %s\n",passenger.dest);
    printf("Amount of bags carried: %d\n",passenger.bagAmount);

    return;
}