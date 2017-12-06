#include <math.h>
#include <stdlib.h>
#include <stdio.h>

#define PI 3.14159

int main(void)
{
    puts("Math expression");
    puts("---------------------------------");
    //find the area of a circle
    float radius = 5.0;
    float area;
    //A = PI*Radius
    area = PI*radius*radius;
    printf("A circle with a radius of %f has an area of: %f\n", radius,area);
    puts("\n");
    puts("------------Solving a quadratic equation---------------");
    puts("In algebra, a quadratic equation is any equation having the form where x represents an unknown, and a, b, and c represent known numbers such that a is not equal to 0. If a = 0, then the equation is linear, not quadratic.");
    puts("\n");
    //find the two real roots to a quadratic equation
    // 2
    //aX + bX + c = 0
    float a = 2;
    float b = 7;
    float c = 4;
    float discriminant = sqrt (b*b - 4*a*c); //the value must be positive
    float root1 = (-b + discriminant)/(4*a);
    float root2 = (-b - discriminant)/(4*a);
    printf("Root 1 = %f\n", root1);
    printf("Root 2 = %f\n", root2);
    puts("----------------volume of a cylinder---------------------");
    puts("V=pi * radius squared * height");
    puts("\n");
    float R = 12.375;
    float h = 10.03;
    float Volume = PI * R * R * h;
    printf("The volume is: %f", Volume);
    
    return 0;
}
