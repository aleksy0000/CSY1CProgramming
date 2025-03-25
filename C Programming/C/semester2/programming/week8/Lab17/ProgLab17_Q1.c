/*
    Program Descriptor: Structure templates

    Author: Aleksy Szopinski

    Date: 18/03/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define RANKS 13
#define DESC 20
#define TITLE 30
#define NAME 25
#define ISBN 13
#define ADDRESS 45
#define DATE 3
#define AMPM 2

//struct templates
struct playing_cards
{
    int clubs[RANKS];
    int hearts[RANKS];
    int diamonds[RANKS];
    int spades[RANKS];
};
struct stock_record
{
    int stockID;
    int stockQuantity;
    char stockDesc[DESC];
};
struct library_book
{
    char isbn[ISBN];
    char bookTitle[TITLE];
    char bookAuthor[NAME];
    float price;
};
struct customer_record
{
    unsigned int customerID;
    char customerName[NAME];
    char customerAddress[ADDRESS];
    double outstandingBalance;
};
struct transaction_record
{
    char transType;
    int transDate[DATE];
    float transAmount;
};
struct time_of_day
{
    char am_pm[AMPM];
    int hours;
    int minutes;
    int seconds;
};
struct co_ordinates
{
    int degrees;
    int minutes;
    char direction;
};
struct teams
{
    char teamName[NAME];
    int wins_home;
    int wins_away;
    int losses_home;
    int losses_away;
    int draws_home;
    int draws_away;

};
//Function Signatures


//Main 
int main()
{

}

//Function Definitions