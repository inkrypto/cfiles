#include<stdio.h>

int grabname()
{
    char name[15];

    printf("Your name? ");
    scanf("%s", name); //name doesn't need & because it's an array
    printf("You are %s.\n", name);

    //testing to see if I can print address of name
    printf("address of name is %d\n", *name);

    return(name);
}

int main(grabname)
{
    int i;
    
    for(i=0;i<name;i++){
        printf("%c\n", name[i]);
    }    
   return 0;
}
    
