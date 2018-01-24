#include<stdio.h>
#include<stdlib.h>

int main(){
    char *ptr;
    ptr = "abcd";
    printf("ptr is at %p\n", ptr);
    printf("ptr is %s\n", ptr);
    ptr += 1;
    printf("ptr is at %p\n", ptr);
    printf("ptr is %s\n", ptr);

    char *ptr2;
    ptr2 = "1234";
    printf("ptr2 is at %p\n", ptr2);
    printf("ptr2 is %s\n", ptr2);
    ptr2 += 2;
    printf("ptr2 is at %p\n", ptr2);
    printf("ptr2 is %s\n", ptr2);

    ptr2-=2;

    char **str_v = &ptr;
    printf("dereferrenced str_v '*str_v' is at %p\n", *str_v);
    printf("*str_v is %s\n", *str_v);
    printf("*(str_v+1) is at %p\n", *(str_v+1));
    printf("*(str_v+1) is %s\n", *(str_v+1));
    printf("( ( *(str_v+1) ) +2) is at %p\n", ( *(str_v+1) ) + 2);

    printf("( ( *(str_v+1) ) +2) is %s\n", ( *(str_v+1) ) + 2);
    
    int x = 0;
    char b = 'B';
    int y = 0;
    printf("b is at %p\n", &b);
    printf("b is %s\n", &b);
}
