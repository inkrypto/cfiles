#include<stdio.h>
#include<stdlib.h>

int main(void){
    int staticArray[20];

    int *dynamicArray = malloc(20 * sizeof(int));
    *dynamicArray = 122;
    printf("Address %p stores value %d\n", dynamicArray, *dynamicArray);
    *dynamicArray+=1; 
    printf("Address %p stores value %d\n", dynamicArray, *dynamicArray);
    dynamicArray[1] = 20;
    printf("dynamicArray[1] stores value %d\n", dynamicArray[1]);
    printf("the size dynamicArray is %d\n", sizeof(dynamicArray));
    for(int i=0;i<*dynamicArray;i++){
        printf("%d\n", dynamicArray[i]);
            
    }
    free(dynamicArray);   
}
