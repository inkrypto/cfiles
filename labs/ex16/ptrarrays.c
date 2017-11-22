#include<stdio.h>


int main()
{
    int array[] = {11, 13, 17, 19};
    int x;
    int *aptr;
    aptr = array; 
    //aptr[2]=666;
    *(aptr+2) = 777;     

    for(x=0; x < 4; x++){
        printf("Element %d: %d\n", x+1, *aptr);
        aptr++;
    }

    return 0;
}

