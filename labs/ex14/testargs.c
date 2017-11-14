#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int i = 0;
    
    //loop through array and print the string
    for(i = 1; i < argc; i++){
        printf("%s\n", argv[i]);
        int x = strlen(argv[i]);
        printf("%d\n", x);
    }

    return 0;
}
