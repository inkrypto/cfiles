#include<stdio.h>
void evaluate(int x);

int main()
{
    int i;

    printf("Put in number: \n");
    scanf("%d", &i);

    evaluate(i);
    
    return 0;
}

void evaluate(int x)
{
    if(x <10){
        printf("i is less than %d\n", x);
    } else if (x>10){
        printf("i is greater than %d\n", x);
    } else {
        printf("i is %d\n", x);
    }
}
