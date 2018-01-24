#include<stdio.h>
#include<stdlib.h>

#define TRUE 1;
#define FALSE 0;

void whileloop(int k);
void getInput(void);

int main(){
    //whileloop(1);
    getInput();
}

void whileloop(int k){
    int flag = FALSE;
    while(!flag){
        printf("%d\n", k);
        k++;
        if(k>=10)
            flag = TRUE;
    }
}

void getInput(void){
    char c = 'x';
    int testVar = 0;    
    do{
        testVar = 999;
        printf("Enter a letter:");
        c = getchar();
        printf("You entered: %c \n", c);
        getchar();
    } while ( c != 'x');
    printf("\nYou entered x and the loop quit\n");
    printf("testVar = %d\n", testVar);
}
