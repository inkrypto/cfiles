#include<stdio.h>
#include<ctype.h>

#define SIZE 1024

int main()
{
    char *input;
    
    input = (char *)malloc(sizeof(char)*SIZE);
    if(input == NULL)
    {
        puts("mem error");
        return 1;
    } else {    
        printf("type some shit.\n");
        scanf("%s", input);
    }
    printf("%s is at mem loco\n",input);    
    printf("input is %d big and at %p\n", SIZE, input);
    return 0;
}
