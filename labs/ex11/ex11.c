#include<stdio.h>

int main(int argc, char *argv[])
{
    int numbers[4] = { 0 };
    char name[4] = { 'a' };

    //first print them out raw
    printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    printf("name: %s\n", name);

    //set up numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    
    //set up the name
    name[0] = 'a';
    name[1] = 'a';
    name[2] = 'a';
    name[3] = 'a';

    //then print them out initialized
    printf("numbers after initialized: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);

    printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);

    //print the name like a string
    printf("name: %s\n", name);

    //another wave to use name
    char *another ="Zed";

    printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);

    return 0;
}
