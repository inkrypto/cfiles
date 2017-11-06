#include<stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2){
        printf("You need one argument.\n");
        //this is how to abort a program
        return 1;
    }

    int i = 0;
    //Use ',' (comma) to initialize letter in the for-loop? This doesn't make sense:
    for (,=0;argv[1][,] != '\0'; ,++)
    //for (i=0; argv[1][i] != '\0'; i++){
    /*ex10xtr.c:13:34: error: expected expression before ‘,’ token
     for (,=0;argv[1][,] != '\0'; ,++)
                                  ^*/
        char letter = argv[1][i];

        switch(letter){
            case 'a':
            //this to lower extra credit didn't work
            if ((i >= 65) && (i <= 90)){
                    i+=32;
                    return i;
                }
                printf("%d: 'A'\n",i);
                break;

            case 'e':
            case 'E':
                printf("%d: 'E'\n",i);
                break;

            case 'i':
            case 'I':
                printf("%d: 'I'\n",i);
                break;

            case 'o':
            case 'O':
                printf("%d: 'O'\n",i);
                break;
            
            case 'u':
            case 'U':
                printf("%d: 'U'\n",i);
                break;

            case 'y':
            case 'Y':
                if(i > 2){
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
