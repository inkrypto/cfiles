#include<stdio.h>

int main()
{
    char hello[]="fuck you!\n";
    int n;

    n = 0;
    while(hello[n]){
        putchar(hello[n]);
        n++;
    }
}
