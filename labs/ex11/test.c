#include<stdio.h>

int main(int argc, char *argv[])
{
    char name[5] = { 'a', 'b', 'c', 'd', 'x', 'k' };

    printf("name: %s\n", name);
    int x = sizeof(name);
    printf("%d\n",x);

    char *another = "Brent";
    printf("another: %s\n", another);
    printf("%d\n",sizeof(*another));
    printf("%c %c %c %c %c\n", another[4], another[3], another[2], another[1], another[0]);
    return 0;
}

