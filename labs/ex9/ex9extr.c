#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    while(i < 100){
        if(i % 15 == 0){
            printf("fizzbuzz");
        }
        else if(i % 5 == 0){
            printf("fizz");
        }
        else if(i % 3 == 0){
            printf("buzz");
        }
        else{
           printf("%d",i);
        }
        i++;
        printf("\n");
    }
    return 0;
}
