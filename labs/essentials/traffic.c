#include<stdio.h>
#include<stdlib.h>

//function prototypes
void checkTrafficLight(void);
void processColor(char c);

int main(void)
{
    checkTrafficLight();
    return 0;
}

//function definitions
void checkTrafficLight(void)
{
    printf("What color is the light? R/Y/G \n");
    char color;
    scanf("%c", &color);
    switch(color){
        case 'R':
            printf("Stop!\n");
            break;
        case 'Y':
            printf("Haul Ass!!!!\n");
            break;
        case 'G':
            printf("Youre good\n");
            break;
        default:
            processColor(color);
    }
}

void processColor(char c)
{
    printf("Fuck off!\n");
}
