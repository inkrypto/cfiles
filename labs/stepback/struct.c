#include<stdio.h>
#include<stdio.h>
int main()
{
    struct date {
        int year;
        int month;
        int day;
    };

    struct person{
        char name[32];
        struct date birthday;
    };
    
    struct person friend;

    strcpy(friend.name,"Denzel Washington");
    friend.birthday.year = 67;
    friend.birthday.month = 6;
    friend.birthday.day = 1;
   
     printf("%s was %d years old\n", friend.name, friend.birthday.day);
    
    return 0;
}
