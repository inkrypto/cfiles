#include<stdio.h>

char gimmeAnA(void);

int main()
{
    char grade;

    grade = gimmeAnA();
    printf("On this test you received an %c.\n", grade);

    return 0;
}

char gimmeAnA(void)
{
    char grade;
    printf("please put the grade you think you deserve?\n");
    scanf("%c", &grade); 
    return grade;
}
