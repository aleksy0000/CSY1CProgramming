/*
    Program Descriptor: Employee MGMT system

    Author: Aleksy Szopinski

    Date: 18/03/2025
*/
//Header Files
#include <stdio.h>

//Symbolic Names
#define LENGTH 20

//struct templates
struct employee
{
    int ID;
    char name[LENGTH];
    int age;
    float salary;
};

//Function Signatures
void printEmployeeInfo(struct employee e);
void updateSalary(struct employee *e, float percent);

//Main 
int main()
{
    struct employee employees[5] = {
        {1,"Alice",30,50000},
        {2,"Bob",28,48000},
        {3,"Charlie",45,55000},
        {4,"David",40,60000},
        {5,"Eve",27,45000}
    };

    printf("\nBefore Salary update:\n");
    printEmployeeInfo(employees[2]);

    updateSalary(&employees[2],10); //increase salary by 10%

    printf("\nAfter salary update:\n");
    printEmployeeInfo(employees[2]);

    return 0;

}

//Function Definitions
void printEmployeeInfo(struct employee e)
{
    printf("ID: %d\nNAME: %s\nAGE: %d\nSALARY: %.2f", e.ID,e.name,e.age,e.salary);
}

void updateSalary(struct employee *e, float percent)
{
    e->salary = e->salary + (e->salary * (percent / 100));
}