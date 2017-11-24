#include<stdio.h>
#include<string.h>

int main()
{
    char source_string[]="I am stranger";
    char find_me[]="stranger";

    if(strstr(source_string,find_me)==NULL)
        puts("String not found!");
    else
        printf("Found '%s' in '%s'\n",find_me,source_string);    

    return 0;
}

