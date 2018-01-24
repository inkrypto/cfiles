#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void){
    numberSeriesStops(9);        

    return 0;
}

//Recursive fork bomb
void numberSeriesStops(int k){
    printf("k:%d\n", k);
    if(k<20)
        numberSeriesStops(k+1);
}

