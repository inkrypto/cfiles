#include<stdio.h>

int main(int argc, char *argv[])
{
    int i =0;

    if(argc == 1){
        printf("You only have 1 argument. You suck!.\n");
    } else if (argc > 1 && argc < 4){
        printf("Here's your arguments:\n");

        for(i=0; i < argc; i++){
            printf("%s", argv[1]);
        }
        printf("\n");
    } else {
        printf("You have too many arguments. You're lame!\n");
    }

    return 0;
}
