#include<stdio.h>

int main(int argc, char *argv[])
{
	int age;
	int height;
        int i;
        for(i=0;i<argc;i++)
            printf("%d\n",argv[i]);        

	printf("I am %c years old.\n", argv[2]);
	printf("I am %d inches tall.\n", height);
	
	return 0;

}


