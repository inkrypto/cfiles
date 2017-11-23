#include<stdio.h>

int main()
{
    int a[10], x;
    int *pa;
    
    pa = &a[0];  //pa ptr to addr of a[0]

    x = *pa;    //x=contents of pa (a[0] in this case

    printf("var a is %d\n", a);
    printf("var x is %d\n", x);
    printf("ptr *pa mem addr is %d\n", &a[0]);
    printf("var a[0] is %d\n", *pa);
    printf("var x is %d\n", &pa);

    return 0;
}


