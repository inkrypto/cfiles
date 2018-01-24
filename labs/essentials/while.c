#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

void bar(void);
void loopy(int b);

int main(){
    printf("How many bars? \n");
    int b;
    scanf("%d", &b);
    bar();
    loopy(b);    
}

void bar(void){
    int i;
    char c = '*';
    for(i = 0; i < 7; i++){
        printf("%c", c);
    }
    puts("\n");
}

void loopy(int b){
    int x = 0;
    while(x<b){
        bar();
        x++;
    }
}
