#include<stdio.h>

int main()
{
    char *string = "fuck off\n";

    while(*string)
    {
        putchar(*string);
        string++;
    }

    return 0;
}
