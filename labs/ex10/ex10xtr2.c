#include<stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2){
        printf("You need one argument.\n");
        //this is how to abort a program
        return 1;
    }

    int i = 0;
    for (i=0; argv[1][i] != '\0'; i++){
        char letter = argv[1][i];
        
        /*change switch to if/else
        switch(letter){
            case 'a':
            case 'A':
                printf("%d: 'A'\n",i);
                break;*/

        if(letter == 'a'){
            //how do you make %d == A
            printf("%d, 'A'",i);
        }

        if(letter == 'e'){
            printf("%d, 'E'",i);
        }


        if(letter == 'i'){
            printf("%d, 'I'",i);
        }

        if(letter == 'o'){
            printf("%d, 'O'",i);
        }


        if(letter == 'u'){
            printf("%d, 'U'",i);
        }
        
        if(letter == 'y' && i > 2){
            printf("%d: 'Y'\n",i);
            break;
        }
        else{
            printf("%d: %c is not a vowel\n", i, letter);
        }
    }

    return 0;
}
