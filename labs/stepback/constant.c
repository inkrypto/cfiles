#include<stdio.h>

#define INPUT_MAX 64 

int main()
{
    char input[INPUT_MAX];

    printf("Instructions: ");
    fgets(input, INPUT_MAX, stdin),
    puts("Here are the instructions:");
    puts(input);

    return 0;
}
