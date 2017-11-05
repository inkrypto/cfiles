#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 25;
    while(i > 0){
        printf("%d", i);
        i--;
        printf("\n");
    }

    //this is needed to add last newline
    printf("\n");
    return 0;
}
