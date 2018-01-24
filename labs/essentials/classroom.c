#include<stdio.h>
#include<stdlib.h>

#define NUMBER_OF_CLASSROOMS 10

void printArray(char dataName[], int dataSet[], int dataLenth);

int main(void){
    int classrooms[NUMBER_OF_CLASSROOMS] = {15, 18, 10, 23, 1};

    classrooms[3] += 2; //classroom[3] was 23, now 25;
    printf("The 5th element is %d \n\n", classrooms[4]);

    printArray("fuck you", classrooms, NUMBER_OF_CLASSROOMS);

    return EXIT_SUCCESS;
}

void printArray(char dataName[], int dataSet[], int dataLenth){
    for(int i=0; i < NUMBER_OF_CLASSROOMS; i++){
        printf("%s[%d]: %d\n", dataName, i, dataSet[i]);
    }
}
