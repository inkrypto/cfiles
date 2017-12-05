#include<stdio.h>
#include<stdlib.h>

int main(void){
    
    //declare variables used in the decision process
    int weather;
    int readiness;
    int supermarket;
    int minivan;
    int wagon;
    int mood;
    int decision;

    //get user input
    printf("Weather outlook? (1 = Good, 0 = Bad)");
    scanf("%d", &weather);
    printf("Picnic readiness? (1 = Good, 0 = Bad)");
    scanf("%d", &readiness);
    printf("Is there a supermarket, just in case? (1 = Yes, 0 = No)");
    scanf("%d", &supermarket);
    printf("Minivan ok? (1 = Good, 0 = Bad)");
    scanf("%d", &minivan);
    printf("Station wagon condition? in case minivan fucked (1 = Good, 0 = Bad)");
    scanf("%d", &wagon);
    printf("Mood outlook? (1 = Good, 0 = Bad)");
    scanf("%d", &mood);

    //calculate outcome and display the decision
    decision = (weather && (readiness || supermarket) && (minivan || wagon) && mood);
    printf("Under these conditions the decision to have a fucking picnic is: %d", decision);
    
    return 0;
}
