#include<stdio.h>
#include<stdlib.h>

void listNumbers(int small, int large, int k);

int main()
{
    printf("Enter a num: ");
    int smallNum;
    scanf("%d", &smallNum);

    printf("Enter another num" );
    int largeNum;
    scanf("%d", &largeNum);

    listNumbers(smallNum, largeNum, 1);

    return 0;
}

void listNumbers(int small, int large, int k)
{
    printf("Step[%d]: %d\n", k, small);
    if(small<large)
        listNumbers(small+1, large, k+1);
}
