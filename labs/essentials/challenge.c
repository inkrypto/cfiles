#include<stdio.h>
#include<math.h>

int main(){

    double centimeters;

    puts("Enter your height in Centimeters:");
    scanf("%lf", &centimeters);

/*  my way"
    float feet = centimeters / 0.0328084;
    float inches = centimeters * .39;   
    printf("You are %.02f feet and %.02f inches tall MF!\n",feet,inches);
*/
    double inches = centimeters/2.54;
    int feet = inches/12;
    double delta = inches - (feet * 12);

    printf("You are %d feet %.1f inches\n", feet, delta);    

    return 0;
}
