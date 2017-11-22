#include<stdio.h>

int main(int argc, char *argv[])
{
    int x = 1, y = 2;
    printf("Var x = %d.\n", x);
    printf("Var y = %d.\n", y);

    int *ip;
    ip = &x;

    y = *ip;
    x = ip;

    *ip = 3;

    printf("Var x = %d and address is %p.\n", x, ip);
    printf("Var y = %d.\n", y);
    return 0;
}
