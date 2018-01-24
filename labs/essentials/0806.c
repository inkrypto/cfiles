#include<stdio.h>
#include<stdlib.h>

//constants to increase readability
#define SELL_POINT      54.2
#define BUY_POINT       28.5

//protos
double askStockValue(void);
void makeDecision(double value);
void handleTransaction(char action);

int main(void){
    double value = askStockValue();
    makeDecision(value);
    return 0;
} 

double askStockValue(void){
    printf("What is the stock value?");
    double value;
    scanf("%lf", &value);
    return value;    
}

void makeDecision(double value){
    //nested if's are a good choice when there's a range of values
    if(value <= BUY_POINT)
        handleTransaction('b');
    else
        if(value >= SELL_POINT)
            handleTransaction('s');
        else
            handleTransaction('h');
}

void handleTransaction(char action){
    //switch statements are good when choices are matching exact values
    switch(action){
    case 'b':
        printf("buy more\n");
        break;
    case 's':
        printf("sell\n");
        break;
    case 'h':
        printf("hold\n");
        break;
    default:
        printf("fuck off!!!!\n");
    }
}
