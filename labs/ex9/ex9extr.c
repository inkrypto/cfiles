#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 25;
    while(i > 5 && i < 8){
        printf("blast off in %d, seconds", i);
        i--;
        printf("\n");
    }
    printf("\n");
    return 0;
}
