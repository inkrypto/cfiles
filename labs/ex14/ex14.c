#include<stdio.h>
#include<ctype.h>

/*int can_print_it(char ch)
{
    return isalpha((int)ch) || isblank((int)ch);
}*/

void print_letters(char arg[])
{       int i = 0;

        for (i = 0; arg[i] != '\0'; i++){
            //char ch = arg[i];
            //if (ch){
            printf("'%c' == %d\n", arg[i]);
            }
    printf("\n");
}

/*void print_arguments(int argc, char **argv)
{
    int i = 0;

    for (i=0; i < argc; i++){
        print_letters(argv[i]);
        }
    }*/

int main(int argc, char *argv[])
{
    print_letters(argc, argv);
    return 0;
}
