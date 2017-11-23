#include<stdio.h>

int main(){
    int x = 10;
    int *y = &x;

    printf("%d\n", *y);
    printf("%d\n", x);
}
