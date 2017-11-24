#include<stdio.h>
#include<string.h>

int main()
{
    char password[9];

    printf("Enter your password: ");    
    scanf("%8s",password);
    if(strcmp(password, "secret")==0)
        puts("You've been granted access!");
    else
        puts("Intruder alert!");

    return 0;
}

