#include<stdio.h>
#include<time.h>

int main()
{
    time_t now;
    struct tm *right_now;
 
    time(&now);
    right_now = localtime(&now);

    printf("Today is %d/%d at %d:%02d\n",
            right_now->tm_mon+1,
            right_now->tm_mday,
            right_now->tm_hour,
            right_now->tm_min);

    printf("the current time is %s\n", ctime(&now));

    return 0;
}
