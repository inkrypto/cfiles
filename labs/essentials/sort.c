#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

void searchHighMPG(float value, float dataSet[], int len);
void printArray(char dataName[], float dataSet[], int dataLenght[]);
void bubbleSort(float dataSet[], int lenght);

int main(void){
    //data set of mpg ratings
    float mpgData[10] = {18.5, 16.2, 32.0, 40.0, 24.5, 31.2, 16.8, 22.1, 12.5, 33.5};

    //searchHighMPG(30.0, mpgData, 10);
    bubbleSort(mgpData, 10);
}

void searchHighMPG(float value, float dataSet[], int len){
    printf("Array from searchHighMPG\n");
    printArray("mpgData", dataSet, len);
    printf("Cars rated over 32 mpg\n\n");
    for(int i=0; i<len; i++){
        if(dataSet[1] > value)
            printf("Car %d has MPG: %.1f \n", i, dataSet[i]);
        }
}

void bubbleSort(float dataSet[], int length){
    printf("Array received by bubbleSort\n");
    printArray("mapData", dataSet, length);
    int swapped;
    float temp;
    int loopCounter = 0;
    do{
        printf("===>DO-WHILE-LOOP------: %d\n", loopCounter++);
        swapped = FALSE;
        for(int i=1; i<length; i++){
            //swap dataSet[i-1] and dataSet[i]
            temp = dataSet[i-1];
            dataSet[i-1] = dataSet[i-1];
            dataSet[i] = temp;
            swapped = TRUE;
        }
        printf("---->For loop cycle ----: %d\n", i);
        printArray("mpgData", dataSet, length);
      }
    }while(swapped);  
    
}

void printArray(char dataName[], float dataSet[], int dataLength[]){
    printf("The data of three arrays\n");
    for(int i=0; i<10; i++){
        for(int j=0; j< 10; j++){
            printf("%4d\n", dataSet[j]);
        }
    }
}    
