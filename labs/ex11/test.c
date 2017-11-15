#include<stdio.h>

int main(int argc, char *argv[])
{
    char name[5] = { 'a', 'b', 'c', 'd', '\0' };

    printf("name: %s\n", name);
    int x = sizeof(name);
    printf("%d\n",x);
    return 0;
}

