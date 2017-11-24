#include<stdio.h>
#include<ctype.h>
int isLower(int ch);
int main()
{
    int c;
    do
    {
        c = getchar();
        if(isLower(c));
            putchar(c);
    }
    while(c != '\n');
    return 0;
}

int isLower(int ch)
{
    if(ch < 'a' || ch > 'z'){
        return ch;
    }else{
        return 1;
    }
}
