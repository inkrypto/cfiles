#include<stdio.h>
#include<string.h>

int main()
{
    char first[]="i would like to eat ";
    char second[]="macdonalds!\n";
    char buf[64];

    strcpy(buf,first);
    strcat(buf,second);

    printf("%s\n", buf);


    return 0;
}

