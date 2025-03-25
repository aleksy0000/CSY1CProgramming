/*
    Program Descriptor: Student Grade System

    Author: Aleksy Szopinski

    Date:18/03/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define LENGTH 50
#define SIZE 3

//struct templates
struct student
{
    char name[LENGTH];
    int rollnumber;
    int marks[SIZE];
};
//Function Signatures
float avgMark(struct student e[]);

void studentDetails(struct student e[],float avg);

//Main 
int main()
{
    int average;

    struct student students[SIZE] = {
        {'Jimothy', 20, {88,98,78}},
        {'John', 22, {28,38,38}},
        {'Kevin', 23, {58,68,58}}
    };

    average = avgMark(students);





}

//Function Definitions
float avgMark(struct student e[])
{
    float average;
    int sum;
    for(int i = 0;i < SIZE;i++)
    {
        sum = sum + e->marks;
    }
    return average = sum / SIZE;
}

void studentDetails(struct student e[],float avg)