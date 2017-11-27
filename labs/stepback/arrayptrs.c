#include<stdio.h>

int main()
{
    char *gang[5] = {
        "spanky",
        "buckwheat",
        "dickhead",
        "fuckneck",
        "beedle"
    };

    int x;

    //pointer cptr to type char
    char *cptr;

    //loop through array
    for(x=0;x<5;x++)
    {
        cptr = *(gang+x); //assign cptr to each string
        
        //test what is at *cptr
        //suspect mem addr
        printf("*cptr %p\n", cptr);

        //loop through characters
        while(*cptr)
        {
            putchar(*cptr);//
            cptr++;
        }
        printf("\n");
    }
    return 0;
}
