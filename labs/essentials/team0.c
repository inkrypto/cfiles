#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

//constants
#define MAX_NAME_LENGTH       10 //max name len
#define MAX_COLOR       10 //max color len
#define MAX_TEAMS       10 
#define MAX_NAMES 14
#define MAX_AGE         120

//globals
struct person{ 
    char firstName[MAX_NAME_LENGTH]; 
    char *lastName[MAX_NAME_LENGTH];
    int age;
    char eyes[MAX_COLOR];
    float height;
    };

//DATABASE to populate arrays
char bankOfFirstNames[MAX_NAMES][MAX_NAME_LENGTH] = {"ALEX", "BOB", "BRENT", "SAMMY", "TITO"};
char bankOfLastNames[MAX_NAMES][MAX_NAME_LENGTH] = {"STANFORD", "GRIGGS", "MORRIS", "HALL", "PUENTES"};
char bankOfEyes[MAX_COLOR][MAX_COLOR] = {"Red", "Purple Rain", "Metalic", "Toupe", "IceWalkerBlue"};

struct person teams[MAX_TEAMS];         //array of 10 people

//function prototypes
void printStruct(void);
void populateArrayOfStruct(void);

int main(){
    populateArrayOfStructs();
    printStruct();
}

void populateArrayOfStructs(void){
    srand(time(NULL));                  //Seed random number generator with current time

    //populate the team array with random values from the DATABASE
    for(int i = 0; i<MAX_TEAMS; i++){
        int rF = rand() % MAX_NAMES;
        int rL = rand() % MAX_NAMES;
        int rC = rand() % MAX_COLOR;
        strcpy(teams[i].firstName, bankOfFirstNames[rF]);
        strcpy(teams[i].lastName, bankOfLastNames[rL]);
        strcpy(teams[i].eyes, bankOfEyes[rC]);
        teams[i].age = rand() % MAX_AGE;
        teams[i].height = 4.0 + rand() % 3 + (rand() % 10)/10.0;
    }
}

void printStruct(){

    for(int i=0; i<MAX_TEAMS; i++)
    {
    printf("FIRST name:[%8s] \n", teams[i].firstName);
    printf("Last name: [%9s] ", teams[i].lastName);
    printf("Age:[%3d] ", teams[i].age);
    printf("height:[%4.1f]", teams[i].height);
    printf("eye color:[%5s]\n", teams[i].eyes);
    }
}
