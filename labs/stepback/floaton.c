#include<stdio.h>

int max(int x, int y);
//void isLarger(int big);

int main()
{
    int a, b, larger;

    printf("Type 2 numbers, seperated by spaces: ");
    scanf("%d %d", &a, &b);

    larger = max(a, b);
    if(a==larger){
        isLarger(a);
    }else{
        isLarger(b);
    }
    return 0;
}

int max(int x, int y)
{
    if(x > y)
        return(x);
    return(y);
}
int isLarger(int big)
{
    printf("value %d is bigger.\n",big);
}
