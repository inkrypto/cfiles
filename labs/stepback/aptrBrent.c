#include<stdio.h>

int main()
{
    int array[]={11,13,17,19};
    int x;
    int *aptr;

    aptr=array;
    *(aptr+=2) = 180;

    for(x=0;x<4;x++) //loop
    {
        printf("element %d: %d\n", x+1, array[x]); //this time need x+1 instead of x++ to iterate through the elements
        //this is to loop through pointer to the array
    }
    return 0;
    
}
