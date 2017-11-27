#include<stdio.h>

int main(int argc, char *argv[])
{
    int i;
    char *x;
    char *y;

    if(argc == 1){
        printf("You need more args.\n");
    } else if(argc > 1 && argc < 4) {
        for(i=0;i<argc;i++)
            x=argv[i];
        }
    printf("%s\n", x);

    x=y;
    printf("%s\n", y);

    return 0;
}
