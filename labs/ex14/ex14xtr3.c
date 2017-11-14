#include<stdio.h>
#include<ctype.h>
#include<string.h>

//forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
    int i = 0;

    for (i=0; i < argc; i++){
        print_letters(argv[i]
        //printf("%s\n", argv[i]);
        }
        
        // strlen(print_letters(argv[i]));
        //int x = strlen(argv[i]);                //me trying to print length of argv
}

void print_letters(char arg[])
{       int i = 0;

        for (i = 0; arg[i] != '\0'; i++){
            char ch = arg[i];
            
            if (can_print_it(ch)){
                printf("'%c' == %d ", ch, ch);
            }
        }
    
    printf("\n");
    //printf("%d is the length of argv.\n", x); 
}

int can_print_it(char ch)
{
    return isalpha((int)ch) || isblank((int)ch);
}

int main(int argc, char *argv[])
{
    print_arguments(argc, argv);
    return 0;
}
