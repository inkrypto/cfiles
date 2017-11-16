#include<stdio.h>

int main(int argc, char *argv)
{
    char *name="Brent";
    char othername[]="Br3nt";
    printf("%s\n", name);
    printf("%s\n", othername);
    printf("# bytes %ld\n", sizeof(*name));
    printf("# bytes %ld\n", sizeof(othername));

}
