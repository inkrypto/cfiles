#include<stdio.h>
#include<stdlib.h>

int getNumber(void);
void tooSmall(void);
void tooLarge(void);
void justRight(void);
void checkError(int num);

int main(){
    int num = getNumber();

    if((num >= 0) && (num <= 100))
        justRight();
    else
        checkError(num);
    
    return EXIT_SUCCESS;
}

int getNumber(void){
    int num;
    printf("Enter a fucking number. ");
    scanf("%d", &num);
    return num;
}

void checkError(int num){
    if(num < 0)
        tooSmall();
    else
        tooLarge();   
}

void tooSmall(void){
    printf("Too small bitch!!!\n");
}

void tooLarge(void){
    printf("Too big MF!\n");
}

void justRight(void){
    printf("Just right fuckwad.\n");
}
