#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//stdbool.h defines a bool type as true=1 and false=0

//old as way of doing it
typedef int Bool;
#define True 1
#define False 0

int main(void)
{
    Bool aBooleanVar;
    aBooleanVar = False;
    printf("The value of aBool is %d\n", aBooleanVar);
    //bool anotherBool;

    return 0;
}
