#include<stdio.h>
#include<stdlib.h>

typedef int(*callme)(int a, int b);

callme z;

int multiplythis(int x, int y)
{
    int c;
    c = x * y;
    printf("%d\n", c);
    return 0;    
}

int addthis(int x, int y)
{
    int c;
    c = x + y;
    printf("%d\n", c);
    return 0;    
}

void brentPointer(char *str);

int main()
{
    z = addthis;
    z(5, 20);
    z = multiplythis;
    z(5, 20);
    brentPointer("test me");

}

void brentPointer(char *str)
{
    printf("%s\n", str);

}

t
