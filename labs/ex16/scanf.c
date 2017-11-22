#include<stdio.h>

int main()
{

    char x;

    //make a ptr to x
    int y = *x;

    printf("Type a char: ");

    //the '&' reads the address of x and sends that to scanf
    scanf("%c", &x);
    printf("Character %c\n", x);
    
    //get address of x
    printf("pointer = %d\n", &y);

    return 0;
}
