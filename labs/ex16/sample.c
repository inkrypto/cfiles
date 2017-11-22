#include<stdio.h>

void swap(int *px, int *py)
{
        int temp;
        temp = *px;
        //contents of pointer

        *px = *py;
        *py = temp;

}    

int main(int argc, char *argv[])
{
    int a = 1;
    int b = 2;
    
    printf("The address of a is %p\n", &a);
    printf("The address of a is %p\n", &b);
    swap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("The address of a is %p\n", &a);
    printf("The address of b is %p\n", &b);
    return 0;
}
