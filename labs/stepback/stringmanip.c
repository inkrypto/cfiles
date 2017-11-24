#include<stdio.h>
#include<string.h>

int main()
{

    char input[64];
    int len;
    fgets(input,64,stdin);
    len = strlen(input);
    printf("is %d characters.\n", len);
    printf("char input is %ld\n", input);
    return 0;
}
