#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    printf("%s\n", argv);

    printf("%d\n", argc);
    

    //go through each string in argv
    //why am i skipping argv[0] -- because it's the name of the program
    for(i=1; i<argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }

    //lets make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Florida"
    };

    int num_states = 4;
    
    for(i=0; i < num_states; i++){
        printf("state %d: %s\n", i, states[i]);
    printf("%c\n", states[3][2]);    
}

    return 0;
}
