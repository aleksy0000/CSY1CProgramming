/*
    Program Descriptor: Pass by Reference. Write a program that uses two functions - one function to calculate
                        the area of a Square (side x side), another function to calculate the area of a Circle (pi
                        x radius 2 ). Declare a variable in your main for the length of a side of the Square and
                        another variable for the radius of the Circle. Ask the user to enter these values. Using
                        Pass by Reference, pass these as parameters to the separate functions, calculate the
                        areas of the Square and Circle in their separate functions, and display the calculated
                        areas for the Square and Circle back in your main(). Remember, you must use Pass by
                        Reference. Do not forget to declare the signatures for both functions.

                        You can assume the value of pi = 3.14
    Author: Aleksy Szopinski

    Date: 18/02/2025
*/
//Header Files:
#include <stdio.h>

//Symbolic Names:
#define PI 3.14

//Function Signatures:
int squarearea(int *); 
int circlearea(float*);



//Main
int main()
{
    //Local Variables:
    int sq_side;
    float c_radius;
    int sq_area;
    float c_area;

    //Prompt and gather input for square side.
    printf("\nEnter square side:\n");
    scanf("%d", &sq_side);

    //prompt and gather input for circle radius
    printf("\nEnter Circle Radius:\n");
    scanf("%f", &c_radius);

    //call square area function:
    sq_area = squarearea(&sq_side);

    //call circle area function:
    c_area = circlearea(&c_radius);

    printf("Square Area = %d\n", sq_area);

    printf("Circle Area = %.2f\n", c_area);


}//end main


//Function Definitions:
//area of a square
int squarearea(int *side)
{
    return ((*side) * (*side));
}

//area of circle
int circlearea(float *radius)
{
    return (PI * ((*radius)*(*radius))); 
}