#include<stdio.h>
#include<stdlib.h>

void recur(int a, int b);

int main(){
    int a, b;
    printf("enter two numbers: \n");
    scanf("%d %d", &a, &b);
    recur(a, b);
    return 0;
}

void recur(int a, int b){

/*
    int lower = 0;
    
    if(a < b){
        lower = a;
    } else {
        lower = b;
    }
    printf("%d %d\n", a, b);
*/
    while(a!=b)
    {
        printf("%d\n", a);
        a++;
    }
    printf("%d\n", b);
}

