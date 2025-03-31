/*
    Program Descriptor: City Weather Details

    Author: Aleksy Szopinski

    Date: 25/03/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define CITY 20


//struct templates
struct city_weather
{
    char cityName[CITY];
    int population;
    float annualRainfall; //mm
    float annualSunshine; //hours
};

//Function Signatures


//Main 
int main()
{
    struct city_weather dublin;

    strcpy(dublin.cityName, "Dublin");
    dublin.population = 592713;
    dublin.annualRainfall = 731;
    dublin.annualSunshine = 1376;

    

}

//Function Definitions