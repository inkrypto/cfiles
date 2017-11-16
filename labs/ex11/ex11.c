#include<stdio.h>

int main(int argc, char *argv[])
{
    //int numbers[4] = { 0 };
    char name[5] = { "aaaa"};

    //first print them out raw
    //printf("numbers: %d %d %d %d\n", 
       // numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n", 
        name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    //set up numbers
    
    //set up the name

    //then print them out initialized

    //print the name like a string

    //another wave to use name
    char *another ="Zed";

    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;
}
