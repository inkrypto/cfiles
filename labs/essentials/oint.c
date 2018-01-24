#include<stdio.h>
#include<stdlib.h>

int main(){
    int size[] = {15, 18, 21};
    int *ptr;
    ptr = size;
    int numElements = sizeof(size)/sizeof(int);
    printf("There are %d elements in the size array\n", numElements);
    printf("ptr=%d size=%d\n", *ptr, *size);
    printf("Address %x contains =%d\n", ptr, *ptr);
    //ptr++;
    printf("Address %x contains =%d\n", ptr, *ptr);
    //ptr++;
    printf("Address %x contains =%d\n", ptr, *ptr);
    //ptr--;
    printf("Address %x contains =%d\n", ptr, *ptr);
    for(int i=0;i<numElements; i++){
        printf("%p stores %d\n", ptr, *ptr);
        ptr++;
    }
}
