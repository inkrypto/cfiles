#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    time_t now;
    struct tm *right_now;
    
    struct date {
        int month;
        int day;
        int year;
    };
    struct date *birthday;

    birthday = (struct date *)malloc(sizeof(struct date));
    if(birthday == NULL)
    {
        puts("mem error");
        return 1;
    }
    
    printf("Enter the year you were born: ");
    scanf("%d", &birthday->year);
    printf("Enter the month you were born: ");
    scanf("%d", &birthday->month);
    printf("Enter the day you were born: ");
    scanf("%d", &birthday->day);

    printf("You were born %d/%d/%d\n", birthday->year, birthday->month, birthday->day);

    time(&now);
    right_now = localtime(&now);

    //print what year it is
    printf("%d\n", right_now->tm_year);
    
    //subtract time year from date year
    int thisYear = right_now->tm_year + 1900; 
    int total = thisYear-birthday->year;   
    printf("You are %d years old.\n",total);
    
    return 0;
}
