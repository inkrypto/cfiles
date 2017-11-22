#include<stdio.h>

void repeat();

void blorf(void)
{
    puts("the blorf() runs when it is called.");
}

void cheers()
{
    int x;
    for(x=0;x<3;x++){
        printf("Fuck you!\n"); //this is printing a weird %
    }
}

int main()
{
    int a, b;
    a = 1;
    b = 5;

    puts("the main() function always runs first");
    //calling fucntion here
    blorf();
    puts("Thanks, blorf()");
    cheers(b);
    
    puts("repeat function.");
    repeat(a);
    return 0;

}

void repeat(int count)
{
    int x;
    for(x=0; x<count; x++){
        puts("Never Forget!");
    }
}
