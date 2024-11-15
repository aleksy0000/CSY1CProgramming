/*
    Assuming the human heart rate is seventy-five beats per minute,
    write a program to ask a user their age in years and to calculate the number of beats their
    heart has made so far in their life.

    Author: Aleksy Szopinski

    Date: 08/10/2024
*/
#include <stdio.h>

int main(){
    int age;
    int lifebeats;

    printf("What is your age in years?");
    scanf("%d", &age);

    lifebeats = age * 525600;

    printf("Your heart has made %d beats so far", lifebeats);

    return 0;

}