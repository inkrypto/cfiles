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

        switch(letter){
            case 'a':
            case 'A':
                printf("%d: 'A'\n",i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n",i);

            case 'i':
            case 'I':
                printf("%d: 'I'\n",i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n",i);
            
            case 'u':
            case 'U':
                printf("%d: 'U'\n",i);

            case 'y':
            case 'Y':
                if(i < 2){
                //why > 2? is this  a bug
                    printf("%d: 'Y'\n",i);
                }
                break;

            default:
                printf("%d: %c is not a vowel\n", i, letter);
            }    
        }

    return 0;
}
