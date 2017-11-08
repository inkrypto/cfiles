#include<stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2){
        printf("You need one argument.\n");
        //this is how to abort a program
        return 1;
    }

    int i = 0;
    //Use ',' (comma) to initialize letter in the for-loop? This doesn't make sense:
    for (i=0; argv[1][i] != '\0'; i++){
        char letter = argv[1][i]; 
        if ((letter >= 65) && (letter <= 90)){
            letter+=32;
        }

        switch(letter){
            case 'a':
            //this to lower extra credit didn't work
                printf("%d: 'A'\n",i);
                break;

            case 'e':
                printf("%d: 'E'\n",i);
                break;

            case 'i':
                printf("%d: 'I'\n",i);
                break;

            case 'o':
                printf("%d: 'O'\n",i);
                break;
            
            case 'u':
                printf("%d: 'U'\n",i);
                break;

            case 'y':
                printf("%d: 'Y'\n",i);
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);
            }    
        }

    return 0;
}
