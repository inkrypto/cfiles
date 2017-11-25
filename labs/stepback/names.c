#include<stdio.h>

int main(int argc, char *argv[]){
    
/*    int i;
    
    for (i = 0; i < argc; i++){
        printf("%s\n", argv[i]);
    }
*/

    char names[4][7] = {
        "mickey",
        "minnie",
        "goofy",
        "Pluto"
    };

    names[5]=7;
    int x;

    for(x=0;x<5;x++)
        printf("%s\n",names[x]);

    return 0;
}
