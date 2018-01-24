#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TRUE 1
#define FALSE 0

void randNum(int dataSet[], int len);
void printArray(char *dataName, int dataSet[], int len);
void bubble(int dataSet[], int len);

int main(){
    int dataSet[10];
    randNum(dataSet, 10);
    bubble(dataSet, 10);
}

void randNum(int dataSet[], int len){
    srand(time(NULL));
    for(int i=0; i<len; i++)
        dataSet[i] = rand() % 50;
        printArray("Unsorted Array", dataSet, 10);
    printf("DataSet is at %p\n", dataSet);
}

void bubble(int dataSet[], int len){
    int swapped;
    int temp;
    do{
            swapped = FALSE;
            for(int i=1;i<len;i++){
                if(dataSet[i-1] > dataSet[i]){
                    temp = dataSet[i-1];
                    dataSet[i-1] = dataSet[i];
                    dataSet[i] = temp;
                    swapped = TRUE;
                }
            }
    }while(swapped);
    printArray("Sorted Array", dataSet, len);
    
}

void printArray(char *dataName, int dataSet[], int len){
        for(int i = 0; i < len; i++)
                printf("%s[%d]: %d\n", dataName, i, dataSet[i]);
}
