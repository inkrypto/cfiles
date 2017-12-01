#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int x = 5;
    int y = 7;
    int sum, difference, product, division, modulus, increment, decrement;

    sum = x + y;
    printf("If x=%d and y=%d then:\n", x, y);
    printf("sum = %d \n", sum);
    puts("\n");

    difference = x - y;
    printf("If x=%d and y=%d then:\n", x, y);
    printf("difference = %d \n", difference);
    puts("\n");    

    product = x * y;
    printf("If x=%d and y=%d then:\n", x, y);
    printf("product = %d \n", product);
    puts("\n");

    division = x /  y;
    printf("If x=%d divide y=%d then:\n", x, y);
    printf("division = %d \n", division);
    puts("\n");

    modulus = x % y;
    printf("If x=%d and y=%d then you mod them:\n", x, y);
    printf("modulus = %d \n", modulus);
    puts("\n");

    increment = ++y;
    printf("If you increment y %d and then:\n", y);
    printf("increments to  %d \n", increment);
    puts("\n");
    
    decrement = --x;
    printf("If x=%d and you decrement it then :\n", x);
    printf("decrements to = %d \n", decrement);

    puts("-------------------------------------------------");
    //Note the difference between ++X and x++
    x = 1;
    ++x;
    printf("x = %d\n", x);
    printf("x++ = %d\n", x++);
    printf("x = %d\n", x);

    //Note the difference between ++X and x++
    x = 1;
    --x;
    printf("x = %d\n", x);
    printf("x-- = %d\n", x--);
    printf("x = %d\n", x);

    return 0;
}
