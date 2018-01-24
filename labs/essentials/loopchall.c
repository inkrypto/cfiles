#include<stdio.h>
#include<stdlib.h>

void testBreak(void);

int main(){
    testBreak();
}

void testBreak(void){
    int n;
    int loop = 0;
    while(1){
        printf("Cycle [%d]: Enter a number\n", loop);
        scanf("%d", &n);
        if((n != 0) || (loop >= 10))
            break;
        loop++;
    }
}
