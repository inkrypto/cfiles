#include<stdio.h>
#include<stdlib.h>

void listEven();
void listOdd();

int main(){
    listEven();
    listOdd();  
    return 0;
}

void listEven(){
    printf("Even between 0 - 100:\n");
    printf("--------------------\n");
    int i;
    for(i = 0; i <= 100; i+=2){
        printf("%d\n", i);
    }
}

void listOdd(){
    printf("Odd between 0 - 100:\n");
    printf("====================\n");
    int i;
    for(i = 1; i <= 100; i+=2){
        printf("%d\n", i); 
    }
}
