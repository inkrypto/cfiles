#include<math.h>
#include<stdio.h>
int main(void){

    float a, b, c;
    
    puts("Find 2 roots of quadratic equation, aX + bX + c = 0");
    
    printf("Enter # for a:");
    scanf("%f", &a);
    
    printf("Enter # for b:");
    scanf("%f", &b);
    
    printf("Enter # for c:");
    scanf("%f", &c);

    float discriminant = sqrt(b*b - 4*a*c); //sqrt can only be applied to positive numbers

    float root1 = (-b + discriminant)/(4*a);
    float root2 = (-b - discriminant)/(4*a);

    printf("Root 1: %f\n", root1);
    printf("Root 2: %f\n", root2);

    return 0;
}
