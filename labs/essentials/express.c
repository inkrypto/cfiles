#include<stdio.h>
#include<math.h>

int main(){
    puts("Statements and expressions:");
    puts("_________________________--_");
    puts("These simple statements without output:");
    int a = 6;
    int b = 3;
    int c = a + b;
    int j = 0;
    ++j;

    puts("this is a compound statement.");
    double radius = 5.5;
    double circumference = 2. * M_PI * radius;
    double area = M_PI * radius * radius;
    printf("The circumferenc is: %f \n", circumference);

    return 0;
}
