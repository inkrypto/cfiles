#include <stdio.h>
#include <stdlib.h>

//function prototypes
void decision(int p);
void buyorsell(char answer);

int main()
{
    int price;
    printf("Enter the stock price: ");
    scanf("%d", &price); 
    decision(price);
    return 0;
}

void decision(int p)
{
    if(p < 100)
    {
        printf("What do you want to do? Enter 'b' for Buy, 's' for Sell or 'h' for Hold? \n");
        char answer;
        scanf("%s", &answer);
        buyorsell(answer);
    } else {
        printf("Fuck off!\n");
    }
}

void buyorsell(char answer)
{
    switch(answer){
        case 'b':
            printf("Buy it!\n");
            break;
        case 's':
            printf("Sell it don't spray it!\n");
            break;
        case 'h':
            printf("Hold on to your nutz!\n");
            break;
        default:
            printf("Smoke crack ho!\n");
        }
}
