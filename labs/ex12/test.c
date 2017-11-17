#include<stdio.h>

int main(int argc, char *argv)
{
    char *name="Brent";
    char othername[]="Br3nt";
    int arr[] = {52, 23 , 20};
    char *nested[] = {"david", "loves", "br3nt"};
    printf("%s\n", name);
    printf("%s\n", othername);
    printf("%s %s\n",&nested[1][3], nested[2]);
    printf("# bytes %ld\n", sizeof(name));
    printf("# bytes %ld\n", sizeof(othername));
    printf("# bytes %ld\n", sizeof(arr));
    printf("# bytes %ld\n", sizeof(nested));
}
