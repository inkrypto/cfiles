#include<stdio.h>

int main()
{
    puts("Bit level calculations");
    puts("---------------------------------");

    unsigned int x = 10;
    unsigned int y = 1;
    unsigned int result;

    result = x & y;
    printf("x & y = %d\n", result);

    result = x | y;
    printf("x | y = %d\n", result);
    
    result = x ^ y;
    printf("x ^ y = %d\n", result);

    //right shift 1 is equivalent to dividing by 2
    //see note on binary arithmetic
    result = x >> 1;
    printf("x >> 1 = %d\n", result);

    result = y << 1;
    printf("y << 1 = %d\n", result);

    return 0;
}
