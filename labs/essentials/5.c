#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
    char string1[20];
    char string2[20];

    //scenario 1
    puts("---SCENARIO 1---");
    strcpy(string1, "Anybody");
    strcpy(string2, "Anybody home");

    int len1 = strlen(string1);
    printf("Length of string 1: %d\n", len1);
    int len2 = strlen(string2);
    printf("Length of string 2: %d\n", len2);

    printf("Return Value is : %d\n", strcmp(string1, string2));
    puts(" ");

    //scenario 2
    puts("---SCENARIO 2---");
    strcpy(string1, "your house");
    strcpy(string2, "my house");
    
    len1 = strlen(string1);
    printf("Length of string 1: %d\n", len1);
    len2 = strlen(string2);
    printf("Length of string 2: %d\n", len2);

    printf("Return Value is : %d\n", strcmp(string1, string2));
    puts(" ");
    //scenario 3 
    puts("---SCENARIO 3---");
    strcpy(string1, "ourxhouse");
    strcpy(string2, "our house");
    
    len1 = strlen(string1);
    printf("Length of string 1: %d\n", len1);
    len2 = strlen(string2);
    printf("Length of string 2: %d\n", len2);

    printf("Return Value is : %d\n", strcmp(string1, string2));
    puts(" ");
    return 0;
}

