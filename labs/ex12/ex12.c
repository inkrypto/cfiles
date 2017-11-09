#include<stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Brent";
    char full_name[] = {
        'B', 'r', 'e', 'n', 't', ' ', 'L', ' ', 'S', 'h', 'a', 'w', '\0'
    };
    
    //Warning %ld might not work. If not, use %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of ints in areas is %ld. Divide sizeof areas/sizeof ints:\n", sizeof(areas)/sizeof(int));
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]);
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The number of chars: %ld sizeof name/full_name\n", sizeof(name)/sizeof(full_name));
    printf("The name=\"%s\" and full_name=\"%s\"\n", name, full_name);
    printf("Size of char argv[] is, %d\n", sizeof(*argv));
    return 0;
}

