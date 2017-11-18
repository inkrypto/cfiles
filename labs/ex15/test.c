#include<stdio.h>

int main(int argc, char *argv[])
{

    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = { "Alan", "Frank", "Mary", "John", "Lisa"};

     //safely get the size of ages
     int count = sizeof(ages)/sizeof(int);
     int i = 0;

    //fist way using indexing
     for(i=count-1; i >= 0; i--){
         printf("%s has %d years alive.\n", names[i], ages[i]);
     }
    
    return 0;
}
