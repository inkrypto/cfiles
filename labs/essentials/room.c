#include<stdio.h>
#include<stdlib.h>

//function prototypes
void assessRoomCap(void);
void estimateWaitingVisitors(void);
void processData(void);
void Report(void);

//globals
int room1, room2, room3;
int visitors1, visitors2, visitors3;
int totalAvailableSeats, totalWaitingVisitors;

int main(void){
    assessRoomCap();
    estimateWaitingVisitors();
    processData();
    Report();

    return 0;
}

void assessRoomCap(void){
    printf("Enter seats left in room 1:");
    scanf("%d", &room1);
    printf("Enter seats left in room 2:");
    scanf("%d", &room2);
    printf("Enter seats left in room 3:");
    scanf("%d", &room3);
}

void estimateWaitingVisitors(){
    printf("Enter the number of visitors for room 1:");
    scanf("%d", &visitors1);    
    printf("Enter the number of visitors for room 2:");
    scanf("%d", &visitors2);    
    printf("Enter the number of visitors for room 3:");
    scanf("%d", &visitors3);    
}

void processData(void){
    totalAvailableSeats = room1 + room2 + room3;
    totalWaitingVisitors = visitors1 + visitors2 + visitors3;
}

void Report(void){
    printf("Overall there are seats available (1=Yes, 0=No); %d \n", (totalAvailableSeats > totalWaitingVisitors));
    printf("Room 1 can accept more visitors(1 = YEs, 0= no); %d\n", (room1 > visitors1));
    printf("Room 1 can accept more visitors(1 = YEs, 0= no); %d\n", (room2 > visitors2));
    printf("Room 1 can accept more visitors(1 = YEs, 0= no); %d\n", (room3 > visitors3));
    printf("On average, there are %.2f visitors waiting per room\n", (visitors1+visitors2+visitors3)/3.0);
}
