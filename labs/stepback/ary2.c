#include<stdio.h>

#define MEALS 3

int main()
{
    int calories[MEALS];
    int x, total;

    total = 0;
    puts("Calorie counter");
    for(x=0;x<MEALS;x++)
    {
        printf("Calories per meal %d: ", x++);
        scanf("%d", &calories[x]);
        total += calories[x];
    }
    printf("You had a total of %d calories.\n", total);
    
    return 0;
    
}

