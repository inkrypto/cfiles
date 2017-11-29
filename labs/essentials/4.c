#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    puts("!Fuck you!");
    
    char name[20], address[30];

    char c;

    printf("How do you feel on a scale of 1-10?");
    c = getchar();

        printf("Enter name: ");
        scanf("%s", &name);

        printf("Enter address: ");
        scanf("%s", &address);

        printf("%s\n", name);
        printf("%s\n", address);

        printf("You said you feel: ");
        putchar(c);

    return EXIT_SUCCESS;
}
