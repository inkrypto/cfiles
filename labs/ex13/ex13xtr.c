#include<stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    /* for(i=1;i<argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }*/

    char *states[] = {
        "Oregon", "texas",
        "Washington", "Florida"
    };

    int num_states = 4;
    argv[1] = states[1];   
 
    for(i=0; i < num_states; i++){
        printf("state %d: %s\n", i, states[i]);
    }

    for(i=1; i < argc; i++){
        printf("arg %d: %s\n", i, argv[i]);
    }

    return 0;
}
