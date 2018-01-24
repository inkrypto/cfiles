#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

//constants
#define MAX_LENTH       10 //max name len
#define MAX_COLOR       10 //max color len
#define MAX_TEAMS       10 
#define MAX_NAMES       14
#define MAX_AGE         120

//globals
struct person{ 
    char firstName[MAX_LENGHT]; 
    char *lastName[MAX_LENGHT];
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
    printStuct();
}

void populateArrayOfStruct(void){
    srand(time(NULL));                  //Seed random number generator with current time

    //populate the team array with random values from the DATABASE
    for(int i = 0; i<MAX_TEAMS; i++){
        int rF = rand() % MAX
    }
}



    teams[0].firstName = "Brent";
    teams[1].lastName = "Morris";
    teams[5].age = 30;
    //for(int i=0; i<10; i++)
    printf("name %s %s and age is %d\n", teams[0].firstName, teams[1].lastName, teams[5].age);
}
