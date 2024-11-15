/*
    Descriptor: Mandatory Lab Question, program calculates the volume and the surface area of a box and
    calculates the area of a circle.

    Author: Aleksy Szopinski

    Date: 01/10/2024
*/

#include <stdio.h>

int main()
{
    float height = 10;
    float length = 11.5;
    float width = 2.5;
    float volume;
    float surface_area;

    float circle_radius = 4.8;
    const float pi = 3.14159265; /*values that don't change should be declared as const (constants) to make sure 
                                /that they are not change by mistake aswell. It also more efficient, compiles faster. */
    float circle_area;

    printf("Calculating the volume and surface area of a box:\n\n");

    volume = length * width * height;
    printf("This is the volume of the box: %.2f cm^3\n", volume);

    surface_area = 2*((length * width) + (length * height) + (width * height));
    printf("This is the surface area of the box: %.2f cm^2\n\n", surface_area);

    printf("Calculating the area of a circle:\n\n");

    circle_area = pi * (circle_radius * circle_radius);
    printf("This is the area of the circle: %f cm^2\n", circle_area);


    return 0;
    
}