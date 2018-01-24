#include<stdio.h>
#include<stdlib.h>

#define MAX_NAME                30
#define MAX_COLOR               15

struct person{
    char first[MAX_NAME];
    char last[MAX_NAME];
    int age;
    char eyes[MAX_COLOR];
    float height;
    };
    
void printStruct(struct person individual);

int main(){
    struct person citizen;
    citizen.age = 39;
    citizen.height = 5.10;
    strcpy(citizen.first, "Brent");
    strcpy(citizen.last, "Morris");
    strcpy(citizen.eyes, "hazel");

    printStruct(citizen);    
}

void printStruct(struct person individual){
    printf("First name: %s\n", individual.first);
    printf("last name: %s\n", individual.last);
    printf("Age: %d\n", individual.age);
    printf("Height: %.2f\n", individual.height);
    printf("Eyes: %s\n", individual.eyes);
}
