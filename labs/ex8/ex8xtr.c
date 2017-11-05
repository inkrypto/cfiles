#include<stdio.h>

int main(int argc, char *argv[])
{
    int i =0;

    //if(argv[1] == "1")didn't work
    if(argc == 3){
        printf("You entered a number. You suck!.\n");
    } else if (argc == 4){
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
