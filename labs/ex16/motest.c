#include<stdio.h>

int main(int argc, char *argv[])
{
    char *pokeme;
    char *p;
   
    pokeme="666"; 
    p = &pokeme;

    printf("the address of 'pokeme' is %p\n", &pokeme);
    printf("the contents of 'pokeme' are %s\n",pokeme);
    printf("-----------------------------------\n");
    printf("the ptr to pokeme is %p\n", p);
    printf("the contents of 'p' are %s\n", *p); 
    printf("-----------------------------------\n");
    printf("the size of 'pokeme' is %d\n", sizeof(*pokeme));

    return 0;
}
