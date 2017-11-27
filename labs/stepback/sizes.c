#include<stdio.h>

int main(){
    char a[]="41";
    char *p=a;

    printf("var a is @: %s\n", a);
    printf("char p is: %s\n", p);    
    printf("char p is: %p\n", &a);    
    printf("char p is: %p\n", &p);    
    return 0;
}
