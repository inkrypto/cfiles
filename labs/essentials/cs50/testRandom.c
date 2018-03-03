#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(){

	srand48(time(NULL));
	
	char numbers[10]={};
	for(int i = 0; i < 10; i++)
	{
		numbers[i] = rand()%100;
		printf("%d\n", numbers[i]);
	}
}
