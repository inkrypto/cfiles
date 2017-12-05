#include<stdio.h>
#include<stdlib.h>

int main(void){
    puts("Assignment operators in complex statements");

    int a = 5;
    int b = -3;
    int c = 12;

    float r = 1.52;
    float s = 2.08;
    float t = -5.32;

    int integerResult;
    float floatResult;

    puts("--------PART 1-----------");
    
    integerResult = a * r;
    printf("integerResult = %d\n", integerResult);

    floatResult = a * r;
    printf("floatResult = %f\n", floatResult);

    integerResult = (a > b)*c; //note that (a>b) is true, ie 1
    printf("integerResult = %d\n", integerResult);
    
    integerResult = (a < b)*c; //note that (a>b) is true, ie 1
    printf("integerResult = %d\n", integerResult);

    puts("--------PART 2-----------");
   
    printf("a before: %d\n", a);
    integerResult = (++a)*b; //a is incremented first, then used in multiplication
    printf("integerResult: %d\n", integerResult);
    printf("a after: %d\n", a);

    puts("--------PART 3-----------");

    a = 5; //reset to original value
    printf("a before: %d\n", a);
    integerResult = (a++)*b; //a is used in multipliction and then incremented
    printf("integerResult: %d\n", integerResult);
    printf("a after: %d\n", a);

    puts("--------PART 4-----------");
    int initialValue = 0;
    int increment = 5;
    int counter = 1;
    int result = initialValue + increment*counter++; //counter first used in the expression
    printf("result first time: %d counter: %d\n", result, counter);
    result = initialValue + increment*counter++; //counter is used in the expression
    printf("result second time: %d counter %d\n", result, counter);
    result = initialValue + increment*(++counter); //counter is incremented first
    printf("result second time: %d counter %d\n", result, counter);
    return 0;
}
