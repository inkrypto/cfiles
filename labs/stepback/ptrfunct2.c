#include<stdio.h>
#include<ctype.h>

int max(int num1, int num2)
{
    int result;
    if(num1 > num2)
        return(num1);
    else
        return(num2);
    return result;
}

int main()
{
    int x=100;
    int y=200;
    int ret;
    
    ret = max(x, y);
    printf("%d is the larger\n",ret);
    return 0;
}

