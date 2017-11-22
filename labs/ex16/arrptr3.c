#include<stdio.h>

int main()
{
    char *string = "wtf are you looking at?\n";
    puts(string);
    
    int i;

    for(i=0;i<*string;i++){
        printf("%c",&string[i]);
    }
return 0;
}


