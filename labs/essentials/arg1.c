#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void addNumbers(float x, float y){
    float result = x + y;
    printf("%f\n", result);
}

int main(int argc, char **argv){
    
    long conv = strtol(argv[1], NULL, 10);
    addNumbers(2.6, conv);
    return 0;
}
