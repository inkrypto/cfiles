#include<stdio.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char *name = "Brent";
    char full_name[] = {
        'B', 'r', 'e', 'n', 't', ' ', 'L', ' ', 'M', 'o', 'r', 'r', 'i', 's'
    };
    //areas[0]=100; 

    printf("--------------------------------\n");
    printf("Variables\n");
    printf("\t int areas[] = {10, 12, 13, 14, 20};\n"); 
    printf("\t char name = 'Brenton';\n");
    printf("\t char full_name[] = { 'B', 'r', 'e', 'n', 't', ' ', 'L', ' ', 'M', 'o', 'r', 'r', 'i', 's' }\n");
    printf("--------------------------------\n");

    //Warning %ld might not work. If not, use %u since it will use unsigned ints
    printf("The size of an int: %ld\n\n", sizeof(int));
   
    printf("The size of areas (int[]): %ld\n\n", sizeof(areas));
    
    printf("The number of elements in areas is %ld. Divide sizeof areas/sizeof ints:\n\n", sizeof(areas)/sizeof(int));
    
    printf("The first area is %d, the 2nd %d.\n\n", areas[10], areas[1]);
    
    printf("The size of a char: %ld\n\n", sizeof(char));
    
    printf("The size of *name: %ld\n\n", sizeof(name));

    printf("The size of name (char[]): %ld\n\n", sizeof(name));
    
    printf("The number of elements in name: %ld  == sizeof name/sizeof char\n\n", sizeof(name)/sizeof(char));
    
    printf("The name=\"%s\" and full_name=\"%s\"\n\n", name, full_name+110);

    printf("Size of char argv[] is, %ld\n\n", sizeof(char));
    
    return 0;
}

