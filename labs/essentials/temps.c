// Calculate the freezing (0) degrees celsius and boiling (100) degrees celsius of water in Fahrenheit and Kelvin

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

    float c;
    float f;
    float k;
    
    printf("what is the celsius temp fool?\n");
    scanf("%f", &c);   
 
    //farnehiet = celsius * 9/5 + 32
    //kelvin = celsius + 273

    f = c * 9/5 + 32;
    k = c + 273;

    printf("farenheit is %.02f\n", f);      
    printf("kelvin is %.02f\n", k);      

    return 0;
}       
